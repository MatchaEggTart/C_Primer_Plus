#include <stdio.h>
#define SIZE 5

void array_change(int *a,int *b);

int main(void)
{
    int arr[SIZE];
    int i;
    int arr_cha[SIZE];
    for(i=0;i<SIZE;i++)
    {
	scanf("%d",&arr[i]);
    }
    array_change(arr,arr_cha);
    printf("i     arr     cha\n");
    for(i=0;i<SIZE;i++)
    {
	printf("%d     %d     %d\n",i+1,arr[i],arr_cha[i]);
    }
    return 0;
}

void array_change(int *a,int *b)
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
	*(b+(SIZE-i-1))=*a++;
    }
}
