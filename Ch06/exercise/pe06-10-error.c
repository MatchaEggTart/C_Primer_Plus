#include <stdio.h>

int main(void)
{
    int a, b, i, sum;

    sum = 0;
    do
    {
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &a, &b);
        for (i =  a; i <= b; i++)
        {
            sum = sum + i * i;
        }
        printf("The sums of the sqares from %d to %d is %d\n",
               a, b, sum);
    } while (a < b);
    printf("Done\n");

    return 0;
}
