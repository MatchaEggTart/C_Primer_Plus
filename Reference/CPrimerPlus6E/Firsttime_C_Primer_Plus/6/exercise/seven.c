#include<stdio.h>
#include<string.h>
#define SIZE 40
int main()
{
	int i;
	char word[SIZE];	
	printf("Input something:\n");
	scanf("%s",word);
	for(i=strlen(word);i>=0;i--)
		printf("%c",word[i]);
	printf("\n");
	return 0;
}
