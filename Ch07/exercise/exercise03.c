#include <stdio.h>

int main()
{
    int n, odd = 0, even = 0;
    float sum_odd = 0.0, sum_even = 0.0;

    printf("input the positive number, please:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if ((n % 2) == 0)
        {
            even++;
            sum_even+= n;
        }
        else
        {
            odd++;
            sum_odd+= n;
        }
        scanf("%d", &n);
    }
    if (odd == 0)
        printf("\nNumber of even is %3d, the average of evens is %5f.\n", even, (float)(sum_even/even));
    else if (even == 0)
        printf("\nNumber of odd  is %3d, the average of odds  is %5f.\n", odd, (float)(sum_odd/odd));
    else
    {
        printf("\nNumber of even is %3d, the average of evens is %5f.\n", even, (float)(sum_even/even));
        printf("Number of odd  is %3d, the average of odds  is %5f.\n", odd, (float)(sum_odd/odd));
    }

    return 0;
}
