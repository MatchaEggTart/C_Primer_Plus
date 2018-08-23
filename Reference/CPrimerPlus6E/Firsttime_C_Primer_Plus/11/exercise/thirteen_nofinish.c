#include <stdio.h>
#include <string.h>
#define SIZE 81
#define HALT ""
void daoxu(char *);
char *s_gets(char *,int);

int main(void)
{
    int i;
    char string[SIZE];
    char *cp;
    int ct=0;
    s_gets(string,SIZE);
    for(i=0;string[i]!='\0';i++)
    {
	if(string[i]==' ')
	    ct++;
    }
    cp=string;
    printf("%d\n",ct);
    char *daoxu[ct+1];
    for(i=0;i<SIZE;i++)
	if(string[i]==' ')
	    string[i]='\0';
    for(i=0;i<ct+1;i++)
    {
	daoxu[ct-i]=cp+i;
    }
    for(i=0;i<ct+1;i++)
    {
	puts(daoxu[i]);
    }
    return 0;
}
