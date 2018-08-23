#include <stdio.h>
#define SIZE 5
void copy_arr(double target[],double source[],int n);
void copy_ptr(double target[],double source[],int n);
void copy_ptrs(double target[],double source[],double *tmd);

int main(void)
{
    int i;
    double source[SIZE]={1.1,2.2,3.3,4.4,5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    printf("target1 :\n");
    for(i=1;i<SIZE+1;i++)
	printf("%d %.1f\n",i,target1[i-1]);
    printf("target2 :\n");
    for(i=1;i<SIZE+1;i++)
	printf("%d %.1f\n",i,target2[i-1]);
    printf("target3 :\n");
    for(i=1;i<SIZE+1;i++)
	printf("%d %.1f\n",i,target3[i-1]);
    return 0;
}

void copy_arr(double target[],double source[],int n)
{
    int i;
    for(i=0;i<n;i++)
	target[i]=source[i];
}

void copy_ptr(double target[],double source[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
	*target=*source;
	source++;
	target++;
    }

}

void copy_ptrs(double target[],double source[],double *tmd)
{
    while(source!=tmd)
    {
	*target=*source;
	source++;
	target++;
    }
}
