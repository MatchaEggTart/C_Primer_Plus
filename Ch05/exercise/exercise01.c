#include <stdio.h>
#define CHAN 60

int main(void)
{
    int min;
    int hours;

    printf("Input the minutes: ");
    scanf("%d", &min);
    while (min > 0) {
        hours = min / 60;
        min = min % 60;
        printf("So, %dm = %dh:%dm\n", min, hours, min);
        printf("Input the minutes: ");
        scanf("%d", &min);
    }
    printf("That's Done!\n");

    return 0;
}
