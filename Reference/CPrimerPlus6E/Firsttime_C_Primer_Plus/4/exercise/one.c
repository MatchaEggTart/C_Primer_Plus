#include<stdio.h>
int main()
{
	char name[40],lastname[40];
	printf("\nWhat's your all name?\n");
	scanf("%s %s",lastname,name);
	printf("Your firstname is: %s\n"
			"Your lastname is: %s\n",lastname,name);
	getchar();
	return 0;
}
