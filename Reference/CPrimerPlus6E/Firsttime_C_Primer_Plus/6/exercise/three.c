#include<stdio.h>
#include<string.h>
#define O 26
int main()
{
	int n,i,c,o;
	char C[O];
	printf("How many?\n");
	scanf("%d",&n);
	o=0;
	for(i=0;i<=n;i++)
	{
		for(c=0;c<=i;c++)
		{
			C[o]='F'-o;
			printf("%c",C[c]);
			o++;
		}
		printf("\n");
	}
	printf("%zd\n",strlen(C));
	return 0;
}
