#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(void)
{
    double numbers[ARSIZE];


    int i;



    for (i = 0; i < ARSIZE; i++)
    {
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
        printf("%d)%.10f\n", i, numbers[i]);
    }

    return 0;
}
