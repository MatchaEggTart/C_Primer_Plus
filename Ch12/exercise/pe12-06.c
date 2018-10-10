#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void printf_times(int * ar, int n);

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
	printf("%2d ", array[n]);
	if (((n + 1) % 10) == 0)
	    printf("\n");
    }

    printf_times(array, SIZE);

    return 0;
}

void printf_times(int * ar, int n)
{
    int i, j, times;

    for (i = 1; i < 11; i++)
    {
	times = 0;
	for (j = 0; j < n; j++)
	{
	    if (i == ar[j])
		times++;
	}
	printf("The number %2d appear %2d time(s)\n", i, times);
    }
}
