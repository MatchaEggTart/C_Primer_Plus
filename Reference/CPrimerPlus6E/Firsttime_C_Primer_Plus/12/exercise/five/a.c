#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[100];
    int i,j;
    int temp=0;
    
    srand((int)time(0));
    for(i=0;i<100;i++)
    {
        a[i]=rand()%100 +1;
        printf("%3d ",a[i]);
        if((i+1)%10==0)
            printf("\n");
    }
    printf("\n");
    for(i=0;i<100-1;i++)
        for(j=0;j<100-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(i=0;i<100;i++)
    {
        a[100]=rand()%100 +1;
        printf("%3d ",a[i]);
        if((i+1)%10==0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
