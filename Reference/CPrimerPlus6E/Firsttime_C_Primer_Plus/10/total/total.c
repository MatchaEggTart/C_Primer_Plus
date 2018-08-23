#include <stdio.h>
int sum(const int ar[],int n);

int main(void)
{
    int n,i,tot;
    int ar[n];
    printf("Input how many numbers?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
    tot=sum(ar,n);
    printf("Sum is %d\n",tot);
    for(i=0;i<n;i++)
	printf("%d %d\n",i+1,ar[i]);
    return 0;
}

int sum(const int ar[],int n)
{
    int i;
    int total=0;
    for(i=0;i<n;i++)
	total+=ar[i]++;
    return total;
}
