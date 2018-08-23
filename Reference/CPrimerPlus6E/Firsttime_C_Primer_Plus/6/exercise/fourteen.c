#include<stdio.h>
#define SIZE 7
int main()
{
	int i,j;
	int shuzu[SIZE],sum[SIZE];
	for(i=0;i<=SIZE;i++)
	{
		scanf("%d",&shuzu[i]);
		for(j=0,sum[i]=0;j<=i;j++)
		{
			sum[i]=sum[i]+shuzu[j];/*虽然每次sum[i]=0；													反而确保了sum[i],例如：											i=2;sum[2]=0;													sum[2]=sum[2](0)+shuzu[j](从0-2）									相加。实际就是														sum[i]+=shuzu[j]直到j=i 									=> sum[2]=shuzu[0]+shuzu[1]+shuzu[2]. */
		}
	}
	for(j=0;j<=SIZE;j++)
		printf("%6d ",shuzu[j]);
	printf("\n");
	for(j=0;j<=SIZE;j++)
		printf("%6d ",sum[j]);
	printf("\n");
	return 0;
}
