#include <stdio.h>
#define SIZE 6
int biggest(double m[]);

int main(void)
{
    double oo[SIZE];
    int bigone,i;
    for(i=0;i<SIZE;i++)
	scanf("%lf",&oo[i]);
    bigone=biggest(oo);
    printf("the biggest one[] is %d\n",bigone);
    return 0;
}

int biggest(double m[])
{
    int i,c;
    float big=0.0;
    for(i=0;i<SIZE;i++)
    {
	if(big<m[i])
	{
	    big=m[i];
	    c=i;
	}
    }
    return c;
}

