#include<stdio.h>
int main()
{
	float big,speed,second;
	printf("What's your file'size?\n");
	scanf("%f",&big);
	printf("How many megabits per second?(bit)\n");
	scanf("%f",&speed);
	second=big/(speed/8);
	printf("At %.2f megabits per second, a file of %.2f megab"
			"ytes\ndownloads in %.2f seconds\n",
			speed,big,second);
	return 0;
}
