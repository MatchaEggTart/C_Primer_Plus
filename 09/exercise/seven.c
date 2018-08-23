#include <stdio.h>
int check_ch(int ch);

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        printf("%c %d", ch, check_ch(ch));
        printf("\n");
    }

    printf("Bye\n");

    return 0;
}

int check_ch(int ch)
{
    int a;

    a = ch - 'A' + 1;
    if (a > 32 && a < 59)
        a = a - 32;
    else if ((a < 0 || a >= 59) || (a > 26 && a <= 32))
        a = -1;

    return a;
}
