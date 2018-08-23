#include<stdio.h>
int main()
{
	int a,b,i,sum;
	printf("Enter lower and upper integer limits: ");
	scanf("%d%d",&a,&b);
	sum=0;
	while(a<b)
	{
		for(i=a;i<=b;i++)
			sum+=i*i;
		printf("The sums of the squares from %d to %d"
				" is %d\n",a*a,b*b,sum);
		sum=0;
		printf("Enter next set of limits: ");
		scanf("%d%d",&a,&b);
	}
	printf("Done\n");
	return 0;
}
