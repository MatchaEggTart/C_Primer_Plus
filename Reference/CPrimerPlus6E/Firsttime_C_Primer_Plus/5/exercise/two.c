#include<stdio.h>
int main()
{
	int n,m;
	printf("What's your number?\n");
	scanf("%d",&n);
	m=n+11;
	while(m>n)
	{
		printf("%5d ",n);
		n++;
	}
	printf("\n");
	return 0;
}
