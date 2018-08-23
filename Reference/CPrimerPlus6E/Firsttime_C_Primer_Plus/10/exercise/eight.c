#include <stdio.h>
#define SIZE 7
void copy_arr(double target[],double source[],int n);
void copy_ptr(double target[],double source[],int n);

int main(void)
{
    int i;
    double source[SIZE]={1.1,2.2,3.3,4.4,5.5,7.7,8.8};
    double target1[SIZE-4];
    double target2[SIZE-4];
    double target3[SIZE-4];
    copy_arr(target1,source+2,3);
    copy_ptr(target2,source+2,3);
    printf("target1 :\n");
    for(i=0;i<3;i++)
	printf("%d %.1f\n",i+1,target1[i]);
    printf("target2 :\n");
    for(i=0;i<3;i++)
	printf("%d %.1f\n",i+1,target2[i]);
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
