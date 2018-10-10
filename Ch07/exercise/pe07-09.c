#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned int num;
    unsigned int dev;
    unsigned int i;
    bool isPrime;

    printf("Plz input a number for check: ");
    scanf("%d", &num);
    for (dev = 2; dev <= num; dev++)
    {
        isPrime = true;
        for (i = 2; (i * i) <= dev; i++)
        {
            if (dev % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            printf("%d ", dev);
    }

    return 0;
}
