/*bases.c--以十进制、八进制、十六进制打印十进制数100*/
#include<stdio.h>
int main(void)
{
  int x;
  printf("Enter the number plz: ");
  scanf("%d",&x);
  printf("dec = %d; octal = %o; hex = %x\n",x,x,x);
  printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);
  getchar();
  getchar();
  return 0;
}
