#include <stdio.h>
#include <string.h>
#include <ctype.h>
void delespace (char *);
char *s_gets(char *st,int n);
#define SIZE 30

int main(void)
{
    char string[SIZE];
    s_gets(string,SIZE);
    delespace(string);
    puts(string);
    return 0;
}

void delespace(char *st)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
	if(isspace(st[i]))
	{
	    strcpy(st+i,st+i+1);
	}
    }
}
