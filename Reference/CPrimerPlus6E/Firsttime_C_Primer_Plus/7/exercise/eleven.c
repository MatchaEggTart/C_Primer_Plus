#include<stdio.h>
#define A 2.05
#define B 1.15
#define C 1.09
#define YUNFEI1 6.5
#define YUNFEI2 14
#define YUNFEI3 0.5
int main()
{
	float sum,pound,yangxi,tiancai,huluobo;
	char v;
	printf("a.洋蓟   2.05$/pound\nb.甜菜   1.15$/pound\nc.胡萝卜"
			" 1.09$/pound\n");
	sum=0.00;pound=0.00;
	while((v=getchar())!='q')
	{
		switch (v)
		{
			case 'a':
				printf("How many pounds?\n");
				scanf("%f",&yangxi);
				printf("Which vegetable you chose?\n");
				sum+=yangxi*A;
				pound+=yangxi;
				continue;
			case 'b':
				printf("How many pounds?\n");
				scanf("%f",&tiancai);
				printf("Which vegetable you chose?\n");
				sum+=tiancai*B;
				pound+=tiancai;
				continue;
			case 'c':
				printf("How many pounds?\n");
				scanf("%f",&huluobo);
				printf("Which vegetable you chose?\n");
				sum+=huluobo*C;
				pound+=huluobo;
				continue;
			default:break;
		}
	}
	if(sum>=100)
		sum*=0.05;
	if(pound<=5)
		sum+=YUNFEI1;
	else if(pound<=20)
		sum+=YUNFEI2;
	else
		sum=sum+YUNFEI3*(pound-20)+14;
	printf("\nAll pounds is %.1f. You need to pay"
			" %.2f\nBye!\n",pound,sum);
	return 0;
}
