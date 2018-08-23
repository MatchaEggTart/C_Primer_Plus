#include<stdio.h>
int main()
{
	char word;
	int chars=0;
	while(scanf("%c",&word))
	{
		if(word=='#')
			break;
		chars++;
		printf("%c=%d ",word,word);
		if(chars%8==0)
			printf("\n");
	}
	printf("Done!\n");
	return 0;
}
