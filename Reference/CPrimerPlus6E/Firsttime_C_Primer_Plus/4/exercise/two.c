#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	char name[40],lastname[40];
	printf("\nWhat's your all name?\n");
	scanf("%s %s",lastname,name);
	printf("Your firstname is: %s\n"
			"Your lastname is: %s\n",name,lastname);
	a=20-strlen(lastname)-1;
	printf("\"%*s %s\"\n",a,lastname,name);
	printf("\"%s %s",lastname,name);
	b=a-strlen(name);
	while(b>0)
	{
		printf(" ");
		b=b-1;
	}
	printf("\"\n");
	a=strlen(lastname)+3;
	printf("\"%*s %s\"\n",a,lastname,name);
	getchar();
	return 0;
}

