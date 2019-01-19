#include <stdio.h>
#include <string.h>
void showmenu_a(void);
void showmenu_b(void);
void showmenu_c(void);
void show(void (*fp)(void));
int main(void)
{
    char choice;
    void (*pfun)(void);
    printf("Type the choice a, b, c q\n");
    scanf("%c", &choice);
    getchar();
    while (choice != 'q')
    {
        while (strchr("abc", choice) == NULL)
        {
            puts("puts a, b, c");
            choice = getchar();
        }

        switch (choice)
        {
            case 'a' : pfun = showmenu_a;	break;
            case 'b' : pfun = showmenu_b;	break;
            case 'c' : pfun = showmenu_c;	break;
        }
        pfun();	//use it
        puts("type a b c q");
        choice = getchar();
        getchar();
    }
    puts("Bye");

    return 0;
}

void show(void (*fp)(void))
{
    fp;
    printf("%p\n", fp);
}

void showmenu_a(void)
{
    puts("AAAAAAAAAAAAAAAA");
}

void showmenu_b(void)
{
    puts("BBBBBBBBBBBBBBBB");
}

void showmenu_c(void)
{
    puts("CCCCCCCCCCCCCCCC");
}
