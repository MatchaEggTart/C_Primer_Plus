#include<stdio.h>
void ass(float x,float y);
int main()
{
	float a,b;
	printf("Input:\n");
	while(scanf("%f%f",&a,&b)==2)
	{
		ass(a,b);
		printf("Input:\n");
	}
	printf("end\n");
	return 0;
}

void ass(float x, float y)
{
	printf("answer is %f\n",(x-y)/(x*y));
}
