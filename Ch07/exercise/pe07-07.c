#include <stdio.h>
#define SALARY 10.00
#define OVERTIME 1.5
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25

int main(void)
{
    float time, total_wages, tax;

    scanf("%f", &time);
    if (time > 40)
        total_wages = ((time - 40) * OVERTIME + 40) * SALARY;
    else
        total_wages = time * SALARY;
    if (total_wages < 300)
        tax = total_wages * TAX1;
    else if (total_wages < 450)
        tax = (total_wages - 300) * TAX2 + 300 * TAX1;
    else
        tax = (total_wages - 450) * TAX3 + 150 * TAX2 + 300 * TAX1;
    printf("\nSo\nYour total wages is %.2f\nYour tax is %.2f\n"
           "Take - home pay is %.2f\n", total_wages, tax, total_wages - tax);

    return 0;
}
