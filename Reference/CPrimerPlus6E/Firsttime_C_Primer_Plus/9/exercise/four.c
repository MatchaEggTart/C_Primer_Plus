#include<stdio.h>
double daoshu(double x,double y);

int main(void)
{
	double a,b;
	printf("Enter two number: ");
	scanf("%lf %lf",&a,&b);
	printf("answer is %.4lf\n",daoshu(a,b));
	return 0;
}

double daoshu(double x,double y)
{
	double ww;
	ww=((1/x)+(1/y))/2;
	return ww;
}
