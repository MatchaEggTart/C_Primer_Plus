#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	char c;
	int space=0,line=1,chars=0;
	bool pp;
	pp=false;
	while((c=getchar())!='#')
	{
		chars++;
		if(c==' ')
		{
			space++;
		}
		if(c=='\n')
			line++;
	}
	printf("Space = %d, Lines = %d, Chars = %d\n",space,line,chars);
	printf("Done\n");
	return 0;
}
