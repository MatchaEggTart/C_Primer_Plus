#include<stdio.h>
int main()
{
	int num,two=0,one=0;
	float sum2=0.0,sum1=0.0;
	while(scanf("%d",&num)==1)
	{
		if(num==0)
			break;
		if(num%2==0)
		{
			sum2+=num;
			two++;
		}else
		{
			sum1+=num;
			one++;
		}
	}
	printf("偶数 个数:%5d 平均值:%5.1f\n奇数 \
个数:%5d 平均值:%5.1f\nDone!\n",two,(float)sum2/two,
			 one,(float)sum1/one);
	return 0;
}
