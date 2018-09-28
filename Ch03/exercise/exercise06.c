#include <stdio.h>
int main(void)
{
    float k;
    float w;
    float a = 950;
    float b = 3.0e-23;
    
    scanf("%f", &k);
    w = k * a / b;
    printf("The answer is %e \n", w);

    return 0;
}
