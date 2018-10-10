#include <stdio.h>
double min(double x, double y);

int main(void)
{
    double x, y;
    printf("Give me two numbers, please.\n");
    scanf("%lf %lf",&x, &y);
    printf("The smaller one is %.2lf\n", min(x, y));
}

double min(double x, double y)
{
    return (x < y) ? x : y;
}
