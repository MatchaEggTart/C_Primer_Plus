#include <stdio.h>
#define SIZE 4
void sum(int *array1,int *array2,int *array3,int n);

int main(void)
{
    int i;
    int array1[SIZE]={1,0,4,6};
    int array2[SIZE]={3,4,9,14};
    int array3[SIZE];
    sum(array1,array2,array3,SIZE);
    for(i=0;i<SIZE;i++)
	printf("%d ",array3[i]);
    printf("\n");
    return 0;
}

void sum(int *array1,int *array2,int *array3,int n)
{
    int i;
    for(i=0;i<n;i++,array3++)
	*array3=*(array1+i)+*(array2+i);
}
