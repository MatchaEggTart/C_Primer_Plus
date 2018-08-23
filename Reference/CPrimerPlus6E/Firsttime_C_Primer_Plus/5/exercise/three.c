#include<stdio.h>
int main(void)
{
	const int P=7;
	int d;
	printf("What's your days?\n");
	scanf("%d",&d);
	printf("%d days are %d weeks, %d days.\n",
			d,d/7,d%7);
	return 0;
}
