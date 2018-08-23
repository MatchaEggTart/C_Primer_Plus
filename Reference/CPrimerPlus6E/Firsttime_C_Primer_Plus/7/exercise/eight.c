#include<stdio.h>
#define TIME 40
#define LIMIT1 300
#define LIMIT2 150
#define RATE1 0.15 
#define RATE2 0.20
#define RATE3 0.25
#define ONE 8.75
#define TWO 9.33
#define THREE 10.00
#define FOUR 11.20
int main(void)
{
	float hours,sum,tax,m;
	int a;
	printf("Enter the number corresponding to ghe desires pay rate or action:\n1)$8.75/hr\n2)$9.33/hr\n3)$10.00/hr\n4)$11.20/hr\n5)quit\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:m=ONE;
				break;
		case 2:m=TWO;
				break;
		case 3:m=THREE;
				break;
		case 4:m=FOUR;
				break;
		default:break;
	}
	if((a>=1)&&(a<=4))
	{
		printf("How long you want for a week?\n");
		scanf("%f",&hours);
		if(hours>TIME)
			sum=((hours-TIME)*1.5+TIME)*m;
		else
			sum=hours*m;
		if(sum<=LIMIT1)
			tax=sum*RATE1;
		else if(sum-LIMIT1<=LIMIT2)
			tax=LIMIT1*RATE1+(sum-LIMIT1)*RATE2;
		else
			tax=LIMIT1*RATE1+LIMIT2*RATE2+(sum-LIMIT1-LIMIT2)*RATE3;
		printf("工资总额:%.1f\n税金:%.1f\n净收入:%.1f\n",sum,tax,sum-tax);
		printf("m=%.2f\n",m);
	}	
		printf("bye\n");
	return 0;
}
