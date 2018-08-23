#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem,int val)
{
    int * pb;
    int i;
    pb = (int *)malloc(elem * sizeof(int));
    pb[0]=val;
    for(i=1;i<elem;i++)
    {
        scanf("%d",&pb[i]);
    }
    return pb;
}

void show_array(const int ar[],int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        if((j+1)%9==0)
            printf("\n");
        printf("%2d ",*(ar+j));
    }
    printf("\n");
}
