#include<stdio.h>

int main(void)
{
	char former = 0, present;
	int count = 0;

	while ((present = getchar()) != '#')
	{
		if ((former == 'e') && (present == 'i')) 
			count++;
		former = present;
	}
    printf("How many times for output 'ei', %d time(s)\n", count);

	return(0);
}
