#include <stdio.h>
#define SIZE 5
int find_biggest(double * , int);

int main(void)
{
    double array[SIZE] = { 2.1, 4.7, 60000.5, 700.00, 500.9 };

    printf("\nThe subscript number is :   %d\n\n", find_biggest(array, SIZE));

    return 0;
}

int find_biggest(double * array , int n)
{
    int i;
    int biggest = 0;

    for (i = 1; i < n; i++)
        if (array[i] > array[i - 1])
            biggest = i;

    return biggest;
}
