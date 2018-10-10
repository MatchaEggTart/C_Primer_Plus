#include <stdio.h>
int main(void)
{

    float inch;

    printf("Input the number of inch\n");
    scanf("%f",&inch);
    printf("So %0.2f inch = %0.2f cm\nThanks!\n", inch, inch*2.54);

    return 0;
}
