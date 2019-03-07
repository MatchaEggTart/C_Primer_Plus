#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MASK_ID                 0xff

#define MASK_SIZE               0x7f00

#define MASK_ALIGN              0X18000

#define ALIGN_CENTER            0x8000
#define ALIGN_LEFT              0x10000
#define ALIGN_RIGHT             0x18000

#define MASK_TOGGLE_BOLD        0x20000
#define MASK_TOGGLE_ITALIC      0x40000
#define MASK_TOGGLE_UNDERLINE   0x80000

char show_menu(unsigned long);
void change_font_id(unsigned long *);
void change_size(unsigned long *);
void change_align(unsigned long *);
void change_toggle_bold(unsigned long *);
void change_toogle_italic(unsigned long *);
void change_toggle_underline(unsigned long *);
void eatline(void);

int main(void)
{
    unsigned long zhangti = 0;
    char choice;
    void (*pfun)(unsigned long *);

    
    zhangti |= 1;
    zhangti |= (12 << 8);
    zhangti |= ALIGN_CENTER;
    zhangti |= MASK_TOGGLE_ITALIC;

    while ((choice = show_menu(zhangti)) != 'q')
    {
        // putchar(choice);
        switch (choice)
        {
            case 'f' : pfun = change_font_id;   break;
            case 's' : pfun = change_size;  break;
            case 'a' : pfun = change_align; break;
            case 'b' : pfun = change_toggle_bold;   break;
            case 'i' : pfun = change_toogle_italic; break;
            case 'u' : pfun = change_toggle_underline;  break;
            default:
                break;
        }
        pfun(&zhangti);

    }

    return 0;
}

char show_menu(unsigned long font)
{
    char choice;

    printf(" ID  SIZE ALIGNMENT   B   I   U\n");
    printf("%3d   %3d   ", (font & MASK_ID), ((font & (MASK_SIZE)) >> 8));
    switch (font & MASK_ALIGN)
    {
        case ALIGN_CENTER   : printf("center   ");  break;
        case ALIGN_LEFT     : printf("left     ");  break;
        case ALIGN_RIGHT    : printf("right    ");  break;    
        default             : printf("Unknow   ");
    }
    printf("%3s ",
        (font & MASK_TOGGLE_BOLD) == MASK_TOGGLE_BOLD ? "on" : "off");
    printf("%3s ",
        (font & MASK_TOGGLE_ITALIC) == MASK_TOGGLE_ITALIC ? "on" : "off");
    printf("%3s\n\n",
        (font & MASK_TOGGLE_UNDERLINE) == MASK_TOGGLE_UNDERLINE ? "on" : "off");

    printf("f)change font       s)change size       a)change alignment\n");
    printf("b)toggle bold       i)toggle italic     u)toggle underline\nq)quit\n");
    choice = getchar();
    eatline();
    while (strchr("fsabiuq", choice) == NULL)
    {
        puts("Please enter a f, s, a, b, i, u or q:");
        choice = getchar(); 
        eatline();
    }

    return choice;
}

void change_font_id(unsigned long * font)
{
    int id;
    puts("Enter font id (0-255");
    while (scanf("%u", &id) != 1 || id < 0 || id > 255)
    {
        eatline();
        puts("Please enter 0-255");
    }
    eatline();
    *font &= (~MASK_ID);
    *font |= id;
}


void change_size(unsigned long * font)
{
    int n;
    puts("Enter font size (0-127): ");
    while (scanf("%d", &n) != 1 || (n < 0) || (n > 127))
    {
        puts("Please enter 0-127:");
        eatline();
    }
    eatline();
    *font &= (~MASK_SIZE);
    n <<= 8;
    *font |= n;
}

void change_align(unsigned long * font)
{
    char align_choice;
    puts("Select alignment:\nl)left     c)center    r)right");
    while ((scanf("%c", &align_choice) != 1) || strchr("lcr", align_choice) == NULL)
    {
        // printf("%c", align_choice);
        puts("Please enter a l, c or r");
        eatline();
    }
    eatline();
    *font &= (~MASK_ALIGN);
    switch (align_choice)
    {
        case 'l':   *font |= ALIGN_LEFT;    break;
        case 'c':   *font |= ALIGN_CENTER;  break;
        case 'r':   *font |= ALIGN_RIGHT;   break;
        default:
            break;
    }
}

void change_toggle_bold(unsigned long * font)
{
    *font ^= MASK_TOGGLE_BOLD;
}

void change_toogle_italic(unsigned long * font)
{
    *font ^= MASK_TOGGLE_ITALIC;
}

void change_toggle_underline(unsigned long * font)
{
    *font ^= MASK_TOGGLE_UNDERLINE;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}