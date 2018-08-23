#include<stdio.h>
int main(void)
{	float a,b;
	printf("Please input two floats:");
	while(scanf("%f%f",&a,&b) ==2 )
	{
		printf("(%.2f-%.2f) / (%.2f*%.2f) = %.2f\n",a,b,a,b,(a-b) / (a*b));
		printf("Please input two floats:");
	}
	printf("end\n");
	return(0);
}
