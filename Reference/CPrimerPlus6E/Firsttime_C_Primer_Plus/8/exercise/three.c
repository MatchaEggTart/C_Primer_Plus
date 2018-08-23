#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int lower=0,upper=0;
	while((ch=getchar())!=EOF)
	{
		if(isupper(ch))
			upper++;
		if(islower(ch))
			lower++;
		putchar(ch);
	}
	printf("\nlower:%d\nupper:%d\nDone!\n",lower,upper);
	return 0;
}
