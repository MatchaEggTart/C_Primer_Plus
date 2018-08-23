#include <stdio.h>
#define SIZE 8
int main(void)
{
    int num[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nOK\n");
    getchar();
    getchar();
    for (i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
