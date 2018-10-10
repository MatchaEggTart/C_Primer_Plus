#include <stdio.h>

int main(void)
{
    double a, b, c, i, sum1, sum2;
    
    scanf("%lf", &a);
    for (i = 1; i <= a; i++)
    {
        sum1 += (1 / i);
    }
    for (i = 1, c = 1, b = -1; i <= a; i++)
    {
        sum2 += c * (1 / i);
        c *= b;
    }
    printf("sum1 = %lf\nsum2 = %lf\n", sum1, sum2);

    return 0;
}
