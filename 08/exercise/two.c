#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            printf("\\n ");
        else if (ch == '\t')
            printf("\\t ");
        else
            printf("%d ", ch);
    }

    return 0;
}
