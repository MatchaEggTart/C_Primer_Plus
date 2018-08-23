#include<stdio.h>
int main(void)
{
	const int CHANGE=60;
	int m;
	m=1;
	while(m>0)
	{
		printf("What's your minutes?\n");
		scanf("%d",&m);
		printf("%dH%dM\n",m/CHANGE,m%CHANGE);
	}
	printf("It's over!\n");
	return 0;
}
