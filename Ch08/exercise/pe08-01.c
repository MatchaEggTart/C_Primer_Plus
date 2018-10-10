#include <stdio.h>

int main(void)
{
    int ch;
    int n = 0;

    while ((ch = getchar()) != EOF)
    {
        n++;
    }
    printf("\n%d characters.\n", n);

    return 0;
}
