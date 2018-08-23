#include<stdio.h>
#include<ctype.h>
int xxx(char x);

int main(void)
{
	char ch;
        
	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			printf("\n");
		else
		printf("%d", xxx(ch));
	}
	printf("\nBye\n");
        
	return 0;
}

int xxx(char x)
{
	int b;
        
	if(isalpha(x))
	{
		if(x <= 90)
			b = x-64;
		else
			b = x-96;
	}
	else
		b = 0;
        
	return b;
}
