#include <stdio.h>
#define WE 7

int main(void)
{
    int days, week;
    
    printf("Plz input days : ");
    scanf("%d", &days);
    while (days > 0) {
        week = days / WE;
        days = days % WE;
        printf("%d days are %d week, %d days.\n", week * WE + days,
              week, days);
        printf("Plz input days : ");
        scanf("%d", &days);
    }
    printf("That's done!\n");
    
    return 0;
}
