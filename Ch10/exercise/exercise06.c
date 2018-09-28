#include <stdio.h>
#define SIZE 5
void descending(double *, int);
int main(void)
{
    double array[SIZE] = { 7.5, 0.5, 60000.5, 70000.5, 500.9 };
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("%8.2f ", array[i]);
    }
    printf("\n");

    descending(array, SIZE);

    for (i = 0; i < SIZE; i++)
    {
        printf("%8.2f ", array[i]);
    }
    printf("\n");

    return 0;
}

void descending(double * array, int n)
{
    int head, end;
    double trans;
    
    for (head = 0, end = n - 1; head < end; head++)
    {
        trans = array[head];
        array[head] = array[end];
        array[end] = trans;
        end--;
    }
}
