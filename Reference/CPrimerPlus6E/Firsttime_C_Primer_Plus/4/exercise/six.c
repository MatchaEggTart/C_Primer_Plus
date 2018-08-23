#include<stdio.h>
#include<string.h>
int main()
{
	char name[40],lastname[40];
	int n,l;
	printf("Enter your all name:");
	scanf("%s %s",name,lastname);
	n=strlen(name);
	l=strlen(lastname);
	printf("%s %s\n%*d %*d\n",name,lastname,n,n,l,l);
	printf("%s %s\n%*d %*d\n",name,lastname,-n,n,-l,l);
	return 0;
}
