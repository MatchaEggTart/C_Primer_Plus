#include<stdio.h>
int main(void)
{
  float p,b,m,t,c;
  printf("多少杯？");
  scanf("%f",&b);
  printf("%f杯 = %.2f品脱 = %.2f盎司 = %.2f大汤勺 = %.2f茶勺\n",b,b/2,b*8,b*8/2,b*8/2/3);
  return 0;
}
