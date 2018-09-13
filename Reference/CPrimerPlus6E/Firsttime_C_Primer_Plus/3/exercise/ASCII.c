#include<stdio.h>
int main(void)
{
  int c;
  scanf("%d",&c);
  if (c>127)
    printf("It's more than 127,errors!!!\n");
  else 
    printf("%d is %c .\n",c,c);
  return 0;
}
