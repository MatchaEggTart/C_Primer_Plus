
#include<stdio.h>
void to_base_n(unsigned long n,int b);

int main(void)
{
	unsigned long number;
	int n;
	printf("Enter an integer (q to quit):\n");
	while(scanf("%lu %d",&number,&n)==2)
	{
		printf("Binary equivalent: ");
		to_base_n(number,n);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");
	return 0;
}

void to_base_n(unsigned long n,int b)
{
	int r;
	r=n%b;;
	if(n>=b)
		to_base_n(n/b,b);
	printf("%d",r);
	return;
}
