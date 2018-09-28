#include <stdio.h>
#define DIS 0.0328084

int main(void)
{
    float heigh, inch;
    int foot;    
    printf("Enter a height in centimeters: ");
    scanf("%f", &heigh);
    while (heigh > 0) {
        foot = heigh * DIS;
        inch = (heigh * DIS - foot) * 12;
        printf("%.1fcm = %d feet, %.1f inches\n", heigh, foot, inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &heigh);
    }
    printf("bye\n");

    return 0;
}
