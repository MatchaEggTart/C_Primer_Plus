#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 80
int words(char *p,int s);
int upper(char *p,int s);
int lower(char *p,int s);
int punc(char *p,int s);
int number(char *p,int s);

int main(void)
{
    char *find;
    char string[SIZE];
    fgets(string,SIZE,stdin);
    find=strchr(string,'\n');
    if(find)
	*find='\0';
    printf("WORDS = %d\nUpper = %d\n Lower = %d\nPunctuation = %d\n"
	    "Number = %d\n",words(string,SIZE),upper(string,SIZE),
	    lower(string,SIZE),punc(string,SIZE),
	    number(string,SIZE));
    return 0;
}

int words(char *p,int s)
{
    int i,w;
    for (i=0,w=0;i<=s;i++)
	if(p[i]==' ')
	    w++;
    return w;
}

int upper(char *p,int s)
{
    int i,w;
    for (i=0,w=0;i<=s;i++)
	if(isupper(p[i]))
	    w++;
    return w;
}

int lower(char *p,int s)
{
    int i,w;
    for (i=0,w=0;i<=s;i++)
	if(islower(p[i]))
	    w++;
    return w;
}

int punc(char *p,int s)
{
    int i,w;
    for (i=0,w=0;i<=s;i++)
	if(ispunct(p[i])&&p[i]!=' ')
	    w++;
    return w;
}

int number(char *p,int s)
{
    int i,w;
    for (i=0,w=0;i<=s;i++)
	if(isdigit(p[i]))
	    w++;
    return w;
}
