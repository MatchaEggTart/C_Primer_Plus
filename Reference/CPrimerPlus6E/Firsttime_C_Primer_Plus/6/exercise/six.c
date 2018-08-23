#include<stdio.h>
int main()
{
	int max,min,i;
	printf("MAX is : ");
	scanf("%d",&max);
	printf("MIN is : ");
	scanf("%d",&min);
	printf("       num         2         3\n");
	for(i=min;i<=max;i++)
		printf("%10d%10d%10d\n",i,i*i,i*i*i);
	printf("\n");
	return 0;
}
