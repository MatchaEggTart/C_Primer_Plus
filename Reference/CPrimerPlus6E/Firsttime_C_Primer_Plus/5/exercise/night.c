#include<stdio.h>
void Temperatures(double n);
int main(void)
{
	int i=1;
	double huashi;
	huashi=1.000;
	while(scanf("%lf",&huashi)==1)
	{
		Temperatures(huashi);
	}
	return 0;
}

void Temperatures(double n)
{
	const float HH=273.16;
	printf("摄氏温度= %.2lf\n",5.0/9.0*(n-32.0));
	printf("开氏温度= %.2lf\n",5.0/9.0*(n-32.0)+HH);
}
