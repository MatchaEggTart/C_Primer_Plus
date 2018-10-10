#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void arrsrt(int * ar, int n);

int main(void)
{
    int n;
    int array[SIZE];

    srand((unsigned int) time(0));

    for (n = 0; n < SIZE; n++)
    {
	array[n] = rand() % 10 + 1;
    }
    for (n = 0; n < SIZE; n++)
    {
	printf("(%2d)%2d ", n, array[n]);
    }
    printf("\n");
    printf("\n");
    
    arrsrt(array, SIZE);
    
    for (n = 0; n < SIZE; n++)
    {
	printf("(%2d)%2d ", n, array[n]);
    }

    return 0;
}

void arrsrt(int * ar, int n)
{
    int temp;
    int top, seek;

    for (top = 0; top < n; top++)
	for (seek = top + 1; seek < n; seek++)
	    if (ar[top] < ar[seek])
	    {
		temp = ar[top];
		ar[top] = ar[seek];
		ar[seek] = temp;
	    }
}
