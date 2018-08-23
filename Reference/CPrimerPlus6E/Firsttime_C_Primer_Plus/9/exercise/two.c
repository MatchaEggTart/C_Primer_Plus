#include<stdio.h>
void chline(char ch,int i,int j);

int main(void)
{
	char c;
	int line,column;
	printf("Character : ");
	scanf("%c",&c);
	printf("line? column? ");
	scanf("%d %d",&line,&column);
	chline(c,line,column);
	return 0;
}

void chline(char ch,int i,int j)
{
	int a,b;
	for(a=0;a<j;a++)
	{
		for(b=0;b<i;b++)
			putchar(ch);
		printf("\n");
	}
	return;
}
