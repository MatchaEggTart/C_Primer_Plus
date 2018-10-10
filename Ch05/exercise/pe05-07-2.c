#include <stdio.h>
void calcul(double n);

int main(void)
{
    double num;
    
    printf("Input the number: ");
    scanf("%f", &num);
    calcul(num);

    return 0;
}

void calcul(double n)
{
    printf("%.2f cube is %.2f\n", n, n * n *n);
}
