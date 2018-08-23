#include<stdio.h>
#define F 0.15
#define S 0.28
int main(void)
{
	int n;
	float m,s,tax;
	printf("types\n1)single    17850=>15%%,more=>28%%\n2)"
			"Owner     23900=>15%%,more=>28%%\n3)married"
			"29750=>15%%,more=>28%%\n4)divorce   "
			"14875=>15%%,more=>28%%\nq)quit\n");
	while(scanf("%d",&n)==1)
	{
		if(n<1||n>4)
		{
			printf("WARRING!\n");
			continue;
		}
		switch (n)
		{
			case 1:m=17850;
				   break;
			case 2:m=23900;
				   break;
			case 3:m=29750;
				   break;
			case 4:m=14875;
				   break;
			default:break;
		}
		printf("Your salary: ");
		scanf("%f",&s);
		tax=m*F+(s-m)*S;
		printf("Your tax is : %.1f\n",tax);
	}
	printf("bye\n");
	return 0;
}
