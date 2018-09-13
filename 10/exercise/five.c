#include <stdio.h>
#define SIZE 5
double difference_bigsmall(double * , int);

int main(void)
{
    double array[SIZE] = { 7.5, 0.5, 60000.5, 70000.5, 500.9 };

    printf("\nThe difference between the biggest one and the smallest one is :   %f\n\n", difference_bigsmall(array, SIZE));

    return 0;
}

double difference_bigsmall(double * array , int n)
{
    int i;
    double biggest = array[0];
    double smallest = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > biggest)
            biggest = array[i];
        if (array[i] < smallest)
            smallest = array[i];
    }

    return (biggest - smallest);
}
