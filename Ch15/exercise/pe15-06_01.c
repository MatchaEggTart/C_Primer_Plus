#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define ALIGN_CENTER    0
#define ALIGN_LEFT      1
#define ALIGN_RIGHT     2

struct font_struct
{
    unsigned int font_id :      8;
    unsigned int font_size :    7;
    unsigned int align :        2;
    bool toggle_bold :          1;
    bool toggle_italic :        1;
    bool toggle_underline :     1;
};

void show_menu(const struct font_struct *);
void setting(struct font_struct * , char *);
void eatline(void);

int main(void)
{
    struct font_struct zhangti = { 1, 12, ALIGN_LEFT, true, false, false };
    char choice;

    show_menu(&zhangti);

    while (scanf("%c", &choice) == 1)// && choice != 'q')
    {
        eatline();
        setting(&zhangti, &choice);
        if (choice == 'q')
            break;
        show_menu(&zhangti);

    }

    return 0;
    
}

void show_menu(const struct font_struct * pb)
{
    printf(" ID  SIZE ALIGNMENT   B   I   U\n");
    printf("%3d   %3d   ", pb->font_id, pb->font_size);
    switch (pb->align)
    {
        case ALIGN_CENTER   : printf("center   ");  break;
        case ALIGN_LEFT     : printf("left     ");  break;
        case ALIGN_RIGHT    : printf("right    ");  break;    
        default             : printf("Unknow   ");
    }
    printf("%3s ", pb->toggle_bold == true ? "on" : "off");
    printf("%3s ", pb->toggle_italic == true ? "on" : "off");
    printf("%3s\n\n", pb->toggle_underline == true ? "on" : "off");

    printf("f)change font       s)change size       a)change alignment\n");
    printf("b)toggle bold       i)toggle italic     u)toggle underline\nq)quit\n");
}

void setting(struct font_struct * pb, char * ch)
{
    int n;
    char c;
    while (strchr("fsabiuq", *ch) == NULL)
    {
        puts("Please enter a f, s, a, b, i, u or q:");
        *ch = getchar(); 
        eatline();
    }
    switch (*ch)
    {
    case 's':
        printf("Enter font size (0-127): ");
        scanf("%u", &n);
        eatline();
        pb->font_size = n;
        break;
    case 'a':
        printf("Select alignment:\nl)left   c)center    r)right\n");
        while (strchr("lcr", (c = getchar())) == NULL)
        {
            puts("Please enter a l, c or r:");
            c = getchar();
            eatline();
        }
        eatline();
        if (c == 'l')
            pb->align = ALIGN_LEFT;
        if (c == 'c')
            pb->align = ALIGN_CENTER;
        if (c == 'r')
            pb->align = ALIGN_RIGHT;
        break;
    /*
    case 'f':
        printf("Select the ID of fonts (0~255): ")
    */
    case 'i':
        pb->toggle_italic ^= 1;
        break;
    case 'b':
        pb->toggle_bold ^= 1;
        break;
    case 'u':
        pb->toggle_underline ^= 1;
        break;
    default:
        break;
    }
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}