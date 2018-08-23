#include <stdio.h>

int main(void)
{
    int i,j,n;
    n=3;
    for(i=0;i<n-1;i++)
    {
	printf("\n");
	for(j=i+1;j<n;j++)
	{
	    printf("%d %d\n",i,j);
	}
    }
    return 0;
}
