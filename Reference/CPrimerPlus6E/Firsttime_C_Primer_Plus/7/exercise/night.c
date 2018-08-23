#include<stdio.h>
int sushu(int);
int main(void)
{
	int n,i;
	scanf("%d",&n);
	if(n>=1)
	{
		for(i=2;i<=n;i++)
		{
			if(sushu(i))
				printf("%d ",i);
		}
	}
	else
		printf("WRONG NUMBER!!!");
	printf("\nbye\n");
	return 0;
}
int sushu(int p)
{
	int g;
	for(g=2;g<p;g++)
		if(p%g==0)
			return 0;
	return 1;
}
