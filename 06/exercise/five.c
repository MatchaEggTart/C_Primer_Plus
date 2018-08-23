#include <stdio.h>

int main(void)
{
    int row, i, j;
    char ch[24];

    scanf("%d", &row);
    for (i = 0; i < row; i++)
    {
        printf("%*c", row - i, ' ');
        for (j = 0; j <= i; ch[j] = 'A' + j, printf("%c", ch[j]), j++);
        for (j = 0; j < i; ch[j] = 'A' + i - 1 - j, printf("%c", ch[j]), j++);
        printf("\n");
    }

    return 0;
}
