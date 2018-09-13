/*nogood.c--有错误的程序*/
#include<stdio.h>
int main(void)
{
  int n,n2,n3;
  /*该程序有多处错误*/
  scanf("%d",&n);
  n2=n*n;
  n3=n2*n;
  printf("n=%d, n squared = %d, n cubed = %d\n",n,n2,n3);
}
