#include <stdio.h>
int main(void)
{
    int i, j, temp;
    int a[6] = { 1, 2, 3, 4, 5, 6 };

    for (i = 0; i < 6; i++)
    {
         for (j = 0; j < 6 - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
             }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
