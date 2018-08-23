#include<stdio.h>
int main(void)
{
	int k,count,sum;
	count=0;
	sum=0;
	scanf("%d",&k);
	while(count++<k)
		sum=sum+count;
	printf("sum=%d\n",sum);
	return 0;
}
