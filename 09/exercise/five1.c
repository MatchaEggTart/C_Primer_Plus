#include <stdio.h>
void larger_of(double * x, double * y);

int main(void)
{
    double num1, num2;
    printf("Give me two number: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Number 1 is %.2lf\nNumber 2 is"
           " %.2lf\n\nRun the larger_of()\n",
           num1, num2);
    larger_of(&num1, &num2);
    printf("Number 1 is %.2lf\nNumber 2 is"
           " %.2lf\n", num1, num2);
    return 0;
}

void larger_of(double * x, double * y)
{
    *x = *y = (*x > *y) ? *x : *y;
    return;
}
