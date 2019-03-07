#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define ALIGNMENT_CENTER    0
#define ALIGNMENT_LEFT      1
#define ALIGNMENT_RIGHT     2

struct config_font
{
    unsigned int font_id    :   8;
    unsigned int font_size  :   7;
    unsigned int            :   1;
    unsigned int align      :   2;
    bool toggle_bold        :   1;
    bool toggle_italic      :   1;
    bool toggle_underline   :   1;
};

char show_menu(struct config_font *);
void change_font_id(struct config_font *);
void change_size(struct config_font *);
void select_align(struct config_font *);
void select_bold(struct config_font *);
void select_italic(struct config_font *);
void select_underline(struct config_font *);


void eatline(void);

int main(void)
{
    char choice;
    struct config_font zhangti = { 1, 12, ALIGNMENT_CENTER, false, false, false };
    void (*pfun)(struct config_font *);

    while ((choice = show_menu(&zhangti)) != 'q')
    {
        switch (choice)
        {
            case 'f':   pfun = change_font_id;      break;
            case 's':   pfun = change_size;         break;
            case 'a':   pfun = select_align;        break;
            case 'b':   pfun = select_bold;         break;
            case 'i':   pfun = select_italic;       break;
            case 'u':   pfun = select_underline;    break;
            default:
                break;
        }
        pfun(&zhangti);
    }
    
}

char show_menu(struct config_font * font)
{
    char choice;
    puts(" ID SIZE ALIGNMENT   B   I   U");
    printf("%3d  %3d   ",
        font->font_id, font->font_size);
    switch (font->align)
    {
        case ALIGNMENT_CENTER   :   printf("center");   break;
        case ALIGNMENT_LEFT     :   printf("left  ");     break;
        case ALIGNMENT_RIGHT    :   printf("right ");    break;
        default                 :   printf("None");
    }
    printf("   %3s %3s %3s\n",
        font->toggle_bold == true ? "on" : "off",
        font->toggle_italic == true ? "on" : "off",
        font->toggle_underline == true ? "on" : "off");
    puts("f)change font     s)change size       a)change alignment");
    puts("b)toggle bold     i)toggle italic     u)toggle underline\nq)quit");

    while (scanf("%c", &choice) != 1 && strchr("fsabiuq", choice) == NULL)
    {
        eatline();
        puts("Please enter f, s, a, b, i, u or q");
    }
    eatline();

    return choice;
}

void change_font_id(struct config_font * font)
{
    unsigned int id;
    puts("Enter font id (0-255");
    while (scanf("%u", &id) != 1 || id < 0 || id > 255)
    {
        eatline();
        puts("Please enter 0-255");
    }
    eatline();
    font->font_id = id;
}

void change_size(struct config_font * font)
{
    unsigned int size;
    printf("Enter font size (0-127): ");
    while (scanf("%u", &size) != 1 || (size < 0 || size > 127))
    {
        eatline();
        puts("Please enter (0-127)");
    }
    eatline();
    font->font_size = size;
}

void select_align(struct config_font * font)
{
    char select;
    puts("Select alignment:\nl)left     c)center    r)right");
    while ((scanf("%c", &select) != 1) || strchr("lcr", select) == NULL)
    {
        eatline();
        puts("Please enter l, c or r");
    }
    eatline();
    switch (select)
    {
        case 'c': font->align = ALIGNMENT_CENTER;   break;
        case 'l': font->align = ALIGNMENT_LEFT;     break;
        case 'r': font->align = ALIGNMENT_RIGHT;    break;
        default:                                    break;
    }
}

void select_bold(struct config_font * font)
{
    font->toggle_bold ^= 1;
}

void select_italic(struct config_font * font)
{
    font->toggle_italic ^= 1;
}

void select_underline(struct config_font * font)
{
    font->toggle_underline ^= 1;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}