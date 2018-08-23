z#include <stdio.h>

int main(void)
{
    int sq1[2][3] = {{5, 6}, {7, 8}};
    int sq2[2][3] = {5, 6, 7, 8};
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", sq1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ",  sq2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
