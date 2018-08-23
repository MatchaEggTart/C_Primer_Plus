#include<stdio.h>
#define SIZE 7
int main()
{
	int i,pq[SIZE];
	for(i=0;i<=SIZE;i++)
		scanf("%d",&pq[i]);
	printf("Done!\n");
	for(i=SIZE;i>=0;i--)
		printf("%d",pq[i]);
	printf("\nOver!\n");
	return 0;
}
