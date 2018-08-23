#include<stdio.h>
int main()
{
	float tall;
	char name[40],lastname[40];
	printf("What's you name?\n");
	scanf("%s %s",name,lastname);
	printf("How tall you are?(cm)\n");
	scanf("%f",&tall);
	printf("%s, you are %.2f meter tall\n",name,tall/100);
	getchar();
	return 0;
}
