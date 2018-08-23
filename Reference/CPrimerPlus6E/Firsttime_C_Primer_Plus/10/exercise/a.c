#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    double source[SIZE]={1.1,2.2,3.3,4.4,5.5};
    double a[SIZE];
    for(i=1;i<=SIZE;i++)
	printf("%d %.1f\n",i,source+5);
    return 0;
}

