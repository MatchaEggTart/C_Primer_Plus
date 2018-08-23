#include <stdio.h>
#include <string.h>
#define SIZE 30
char *s_gets(char *,int);
void daoguolai(char *a);

int main(void)
{
    char string[SIZE];
    s_gets(string,SIZE);
    puts(string);
    daoguolai(string);
    puts(string);
    return 0;
}

void daoguolai(char *a)
{
    char b;
    int i,n;
    for(i=0;a[i]!='\0';i++)
	continue;
    i=i-1;
    for(n=0;n<=i-n;n++)
    {
	b=a[n];
	a[n]=a[i-n];
	a[i-n]=b;
    }
}
