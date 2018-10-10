#include <stdio.h>
int main(void)
{
    float num;
    
    printf("Enter a floating-point value: ");
    scanf("%f", &num);
    printf("fixed-point notation: %f\nexponential notation: %e\np notation: %a\n", num, num, num);

    return 0;
}
