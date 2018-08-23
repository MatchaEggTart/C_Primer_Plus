#include<stdio.h>
double min(double x,double y);

int main(void)
{
	double x,y;
	printf("Enter 2 number: ");
	scanf("%lf %lf",&x,&y);
	printf("the min is %.2lf\n",min(x,y));
	return 0;
}

double min(double x,double y)
{
	return (x>y?y:x);
}
