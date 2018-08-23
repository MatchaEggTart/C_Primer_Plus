#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[1000];
    int i,j,n;
    int temp;

    scanf("%d",&n);
    srand(n);
    for(i=0;i<1000;i++)
    {
        a[i]=rand()%101;
    }
    for(j=0;j<=100;j++)
    {
        temp=0;
        for(i=0;i<1000;i++)
        {
            if(j==a[i])
                temp++;
        }
        printf("%3d =%3d ",j,temp);
        if((j+1)%5==0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
