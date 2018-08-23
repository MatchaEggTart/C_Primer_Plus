#include<stdio.h>
int main()
{
	int i,l,t,p;
	scanf("%d",&l);
	l=l-1;
	int pd[l];
	t=2;
	p=2;
	for(i=0;i<=l;i++)
	{
		pd[i]=t;
		t*=p;
	}
	i=0;
	do
	{
		printf("%d ",pd[i]);
		i++;
	}while(i<=l);
	printf("\nDone!\n");
	return 0;
}
