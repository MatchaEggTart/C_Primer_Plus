#include <stdio.h>
#include <string.h>
#define SIZE 30
int checher(char *,char);

int main(void)
{
    char i;
    char string[SIZE];
    char copy[SIZE];
    puts("Enter the string!");
    while(fgets(string,SIZE,stdin) != NULL && string[0] !='\n')
    {
	puts("Enter you char!");
	scanf("%c",&i);
	getchar();
	printf("%d\n",checher(string,i));
	puts("Enter the string!");
    }
    return 0;
}

int checher(char *p,char a)
{
    int i;
    for(i=0;i<strlen(p);i++)
	if(a==p[i])
	    return i;
    return 0;
}
