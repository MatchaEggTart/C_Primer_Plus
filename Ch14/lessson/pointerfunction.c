#include <stdio.h>

void showmenu_a(void);
void showmenu_b(int);

int main(void)
{
    void (* pf_a)(void);
    void (* pf_b)(int);

    pf_a = showmenu_a;
    pf_b = showmenu_b;
    int a = 2;

    (*pf_a)();
    pf_a();
    pf_b(a);
    (*pf_b)(a);

    return 0;

}

void showmenu_a(void)
{
    printf("AAAAA\n");
}

void showmenu_b(int a)
{
    // int c;
    // c = a;
    //    a = a * 5;
    
    printf("%d%d\n", a, a);
}

