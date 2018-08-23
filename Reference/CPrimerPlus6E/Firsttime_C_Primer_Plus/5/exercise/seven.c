#include<stdio.h>
double ddd(double n);
int main()
{
	double d;
	scanf("%lf",&d);
	printf("%lf",ddd(d));
	return 0;
}
double ddd(double n)
{
	return(n*n*n);
}
