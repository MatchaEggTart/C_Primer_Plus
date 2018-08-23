#include<stdio.h>
int main(void)
{
	int change=0;
	char c;
	c=getchar();
	while(c!='#')
	{
		if(c=='.')
		{
			putchar(c-13);
			change++;
		}else if(c=='!')
		{
			putchar(c);
			putchar(c);
			change++;
		}else
			putchar(c);
		c=getchar();
	}
	printf("change=%d\nDone\n",change);
	return 0;
}

