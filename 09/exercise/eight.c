#include <stdio.h>
double power(double n, int p);
double negative_power(double n, int p);
        
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        if (exp < 0)
            xpow = negative_power(x, exp);
        else
            xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- byte!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;

    return pow;
}

double negative_power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i<= -p; i++)
        pow *=n;

    return 1 / pow;
}

