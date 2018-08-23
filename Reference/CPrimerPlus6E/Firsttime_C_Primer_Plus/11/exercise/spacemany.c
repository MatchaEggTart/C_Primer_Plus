#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 40
char *s_gets(char *,int);

int main(void)
{

    int i,j,a;
    char string[SIZE];
    while(s_gets(string,SIZE)!=NULL)
    {
	a=0;
    	for(i=0;i<SIZE&&string[i]!=' '&&string[i]!='\0';i++)
	{
		a++;
	}
	printf("%d\n",a);
    }
    return 0;
}

