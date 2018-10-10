#include <stdio.h>

int main(void)
{
    char ch;
    int n = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.': printf("!");
                n++;
                break;
            case '!': printf("!!");
                n++;
                break;
            default: putchar(ch);
                break;
        }
    }
    printf("\nTransfer %d times\nDone!\n", n);

    return 0;
}
