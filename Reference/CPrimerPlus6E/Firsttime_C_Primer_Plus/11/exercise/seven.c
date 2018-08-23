#include <stdio.h>
char *mystrncpy(char *p1, char *p2, int n);

int main(void)
{
    char str1[81];
    char str2[81];
    int n;
    do
    {
	puts("input string1:");
	gets(str1);
	puts("input string2:");
	gets(str2);
	puts("input the number of copying char:");
	scanf("%d",&n);
	getchar();
	puts("After copying:");
	puts(mystrncpy(str1, str2, n));
	puts("input any char except q to go on.");
	gets(str1);
    }
    while(*str1 != 'q');
    puts("Quit.");
    return 0;
}

char *mystrncpy(char *p1, char *p2, int n)
{
    char *p=p1;
    while(*p1++ != '\0') continue;
    *--p1 = *p2;
    n--;
    while(n>0 && *p2 != '\0')
    {
	*++p1 = *++p2;
	n--;
    }
    return p;
}
