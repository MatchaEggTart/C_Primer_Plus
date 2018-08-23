#include<stdio.h>
int main(void)
{
	int a,i,c;
	printf("How many?\n");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		for(a=1;a<=i;a++)
			printf("$");
		printf("\n");
	}
	return 0;
}
