#include <stdio.h>
#include <string.h>
#define SIZE 40
#define STOP "quit"
char *string_in(char a1[],char b1[]);

int main(void)
{
    int i;
    char a[SIZE];
    char b[SIZE];
    do
    {
	puts("Input string 1:");
	fgets(a,SIZE,stdin);
	puts("Input string 2:");
	fgets(b,SIZE,stdin);
	for(i=0;i<SIZE;i++)
	{
	    if(a[i]=='\n')
		a[i]='\0';
	    if(b[i]=='\n')
		b[i]='\0';
	}
	if(string_in(a,b)==NULL)
	    printf("No same\n");
	else
	    printf("\"a\" address is %p\n,\"b\" address is"
		    "%p\n,string_in is %p\n",a,b,string_in(a,b));
    }while(strcmp(a,STOP)!=0 || strcmp(b,STOP));
    puts("Over");
    return 0;
}

char *string_in(char a1[],char b1[])
{
    char *p;
    p=a1;
    while(*p)
    {
	if (strncmp(p,b1,strlen(b1))==0)//记得一样是等于0！！！
	    return (p);
	else
	    p=p+1;
    }
    return NULL;
}
