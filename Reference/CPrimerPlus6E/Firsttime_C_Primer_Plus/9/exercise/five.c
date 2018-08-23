#include<stdio.h>
void larger_of(double * x,double * y);

int main(void)
{
	double a,b;
	printf("Enter two number : ");
	scanf("%lf %lf",&a,&b);
	larger_of(&a,&b);
	printf("a = %.2lf\nb = %.2lf\n",a,b);
	return 0;
}

void larger_of(double * x,double * y)
{
	double change;
	change=(*x>*y?*x:*y);
	*y=change;
	*x=change;
}
