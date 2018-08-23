#include<stdio.h>
#define TIME 40
#define MONEY 10.00
#define LIMIT1 300
#define LIMIT2 150
#define RATE1 0.15 
#define RATE2 0.20
#define RATE3 0.25
int main(void)
{
	float hours,sum,tax;
	printf("How long you want for a week?\n");
	scanf("%f",&hours);
	if(hours>TIME)
		sum=((hours-TIME)*1.5+TIME)*MONEY;
	else
		sum=hours*MONEY;
	if(sum<=LIMIT1)
		tax=sum*RATE1;
	else if(sum-LIMIT1<=LIMIT2)
		tax=LIMIT1*RATE1+(sum-LIMIT1)*RATE2;
	else
		tax=LIMIT1*RATE1+LIMIT2*RATE2+(sum-LIMIT1-LIMIT2)*RATE3;
	printf("工资总额:%.1f\n税金:%.1f\n净收入:%.1f\n",sum,tax,sum-tax);
	return 0;
}

