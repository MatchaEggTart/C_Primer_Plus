#include <stdio.h>
#define SIZE 6
int biggest(int m[]);

int main(void)
{
    int oo[SIZE];
    int bigone,i;
    for(i=0;i<SIZE;i++)
	scanf("%d",&oo[i]);
    bigone=biggest(oo);
    printf("the biggest one is %d\n",bigone);
    return 0;
}

int biggest(int m[])
{
    int i,big;
    big=0;
    for(i=0;i<SIZE;i++)
    {
	if(big<m[i])
	    big=m[i];
    }
    return big;
}
