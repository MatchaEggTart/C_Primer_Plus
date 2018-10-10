#include <stdio.h>
double harmonic_mean(double x, double y);

int main(void)
{
    double a, b;

    printf("Give me two numbers, please.");
    scanf("%lf %lf", &a, &b);
    printf("So the harmonic mean for %.2lf and %.2lf is"
           " %.2lf\n", a, b, harmonic_mean(a, b));

    return 0;
}

double harmonic_mean(double x, double y)
{
    return 1 / (((1 / x) + (1 / y)) / 2);
}
