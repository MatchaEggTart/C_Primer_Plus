#include<stdio.h>
int main()
{
	const int SIZE=26;
	char zimu[SIZE];
	int i,j,n,o;
	o=0;
	scanf("%d",&n);
	zimu[0]='A';
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			zimu[o]='A'+o;
			printf("%c",zimu[o]);
			o++;
		}
		printf("\n");
	}
	scanf("%d",&o);
	printf("%c\n",zimu[o]);
	return 0;
}
