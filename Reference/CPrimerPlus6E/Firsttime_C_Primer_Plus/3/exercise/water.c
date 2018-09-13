#include<stdio.h>
int main(void)
{
  float w;
  printf("Please input how much quarts the water is: ");
  scanf("%f",&w);
  printf("%f quarts  water has %e molecules.\n",w,w*950/3E-23);
  return 0;
}
