#include <stdio.h>

int main(void)
{
    int row, i, j;
    char ch[10];

    scanf("%d", &row);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            ch[j] = 'F' - j;
            printf("%c", ch[j]);
        }
        printf("\n");
    }

    return 0;
}
