#include <stdio.h>
void calcul(double n);

int main(void)
{
    double num;
    
    printf("Input the number: ");
    scanf("%lf", &num);
    calcul(num);

    return 0;
}

void calcul(double n)
{
    printf("%.2lf cube is %.2lf\n", n, n * n *n);
}
