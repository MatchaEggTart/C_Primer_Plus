#include <stdio.h>

int main(void)
{
    char ch;
    int n = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            printf("!");
            n++;
        }else if (ch == '!')
        {
            printf("!!");
            n++;
        }
        else
            putchar(ch);
    }
    printf("\nTransfer %d times\nDone!\n", n);

    return 0;
}
