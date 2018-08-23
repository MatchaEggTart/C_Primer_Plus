#include<stdio.h>
#define SIZE 26
int main(void)
{
	int i=0;
	char a[SIZE];
	i=0;
	while(i<26)
	{
		a[i]='a'+i;
		i++;
	}
	for(i=0;i<SIZE;i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}
