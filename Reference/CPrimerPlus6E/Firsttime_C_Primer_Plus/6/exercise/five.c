#include<stdio.h>
#define SIZE 26
int main()
{
	int i,j,k,l,n;
	char zimu[SIZE];
	printf("How many?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-1-i;k>0;k--)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			zimu[j]='A'+j;
			printf("%c",zimu[j]);
		}
		for(l=i;l>0;l--)
		{
			zimu[l]='A'+l-1;
			printf("%c",zimu[l]);
		}
		printf("\n");
	}
	return 0;
}
