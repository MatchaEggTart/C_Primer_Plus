//It's not work, But important.
#include <stdio.h>
void sort(double * a, double * b, double * c);
void larger_of(double * x, double * y);

int main(void)
{
    double num1, num2, num3;

    printf("Give me three number, please\n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    printf("%p\n", &num1);
    printf("%p\n", &num2);
    printf("%p\n", &num3);
    sort(&num1, &num2, &num3);
    printf("%.2lf, %.2lf, %.2lf\n", num1, num2, num3);
    
    return 0;
}

void sort(double * a, double * b, double * c)
{
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("\n%.2lf, %.2lf, %.2lf\n", *a, *b, *c);
    larger_of(&a, &b);
    larger_of(&b, &c);
    larger_of(&a, &b);
    printf("\n%.2lf, %.2lf, %.2lf\n", *a, *b, *c);
    return;
}

void larger_of(double * x, double * y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;

    return;
}
