#include <stdio.h>
#define SIZE 5
int find_biggest(int * , int);

int main(void)
{
    int array[SIZE] = { 2, 4, 6, 700, 5 };

    printf("\nThe biggest number is :   %d\n\n", find_biggest(array, SIZE));

    return 0;
}

int find_biggest(int * array , int n)
{
    int i;
    int biggest = 0;

    for (i = 0; i < n; i++)
        if (array[i] > biggest)
            biggest = array[i];

    return biggest;
}
