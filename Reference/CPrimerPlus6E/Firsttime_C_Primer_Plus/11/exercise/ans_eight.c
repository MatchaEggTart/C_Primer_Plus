#include <stdio.h>
char *string_in(char *p1, char *p2);

int main(void)
{
    char str1[81];
    char str2[21];
    char *p;
    do
    {
	puts("input range string:");
	gets(str1);
	puts("input match string:");
	gets(str2);
	p = string_in(str1, str2);
	if ( p )
	{
	    puts("Find!");
	    puts(p);
	}
	else 
	    puts("Can't find!");
	puts("input any char except q to go on.");
	gets(str1);
    }while(*str1 != 'q');
    puts("Quit.");
    return 0;
}

char *string_in(char *p1, char *p2)
{
    char *p1_save = p1, *p2_save = p2;
    if(*p1 == '\0' || *p2 == '\0') return NULL;
    while(1)
    {
	if(*p1 == *p2)
	{
	    if(*++p2 == '\0') 
		return p1_save;
	    if(*++p1 == '\0')
		return NULL;
	}
	else
	{
	    if(*++p1 == '\0') 
		return NULL;
	    p1_save = p1;
	    p2 = p2_save;
	}
    }
}
