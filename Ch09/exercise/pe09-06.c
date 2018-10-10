#include <stdio.h>
void sort(double * a, double * b, double * c);

int main(void)
{
    double num1, num2, num3;

    printf("Give me three number, please\n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    sort(&num1, &num2, &num3);
    printf("%.2lf, %.2lf, %.2lf", num1, num2, num3);
    
    return 0;
}

void sort(double * a, double * b, double * c)
{
    double x;

    if (*a > *b)
    {
        x = *a;
        *a = *b;
        *b = x;
    }
    if (*b > *c)
    {
        x = *b;
        *b = *c;
        *c = x;
    }
    if (*a > *b)
    {
        x = *a;
        *a = *b;
        *b = x;
    }
}
