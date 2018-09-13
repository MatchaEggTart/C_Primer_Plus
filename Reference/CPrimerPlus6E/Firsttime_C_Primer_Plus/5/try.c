#include<stdio.h>
int main(void)
{
	int	x=1,y,a=1,b,o,p;
	y=(4+x++)*(6+x++);
	b=(4+a)*(6+a++);
	printf("x=%d y=%d\na=%d b=%d\n",x,y,a,b);
	return 0;
}
