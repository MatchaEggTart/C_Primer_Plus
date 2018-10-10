#include<stdio.h>
int main(void)
{
	int change=0;
	char c;
	while((c=getchar())!='#')
	{
		switch(c)
		{
			case '.':c-13;
                change++;
                break;
			case '!':putchar(c);
                change++;
                break;
			default: break;
		}
		putchar(c);
	}
	printf("\nchange=%d\nDone\n",change);
	return 0;
}
