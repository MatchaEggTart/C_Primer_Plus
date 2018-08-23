#include<stdio.h>
int main()
{
	double i,sum1,sum2;
	int sign,count;
	printf("The number: ");
	scanf("%d",&count);
	for(i=1.0,sign=1,sum1=0,sum2=0;i<=count;i++,sign-=sign)
	{
		sum1+=1.0/i;
		sum2+=sign*1.0/i;
	}
	printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0...1.0/%d.0=%lf\n",count,sum1);
	printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0...1.0/%d.0=%lf\n",count,sum2);
	return 0;
}
