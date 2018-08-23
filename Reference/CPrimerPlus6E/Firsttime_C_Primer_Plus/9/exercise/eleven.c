#include<stdio.h>
int Fibonacci(int x);

int main(void)
{
	int i;
	scanf("%d",&i);
	printf("%d\n",Fibonacci(i));
	return 0;
}

int Fibonacci(int x)
{
	int i,next=1,last=0,sum;
	if(x==1||x==2)
	{
		sum=1;
		return sum;
	}else
	{
	for(i=2;i<=x;i++)
	{
		sum=next+last;
		last=next;
		next=sum;
	}
	return sum;
	}
}
