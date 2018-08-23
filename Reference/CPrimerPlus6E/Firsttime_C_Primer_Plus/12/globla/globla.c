#include <stdio.h>
int units = 0;// external variable

void critic(void);

int main(void)
{
    extern int units;//just defi agian

    printf("\nHow many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units != 56)
        critic();
    printf("You must have looked it up!\n\n");

    return 0;
}

void critic(void)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d",&units);
}
