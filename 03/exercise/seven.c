#include <stdio.h>
int main(void)
{
    float heigh;

    scanf("%f", &heigh);
    printf("%.2f inch = %.2e cm\n", heigh, heigh * 2.54);

    return 0;
}
