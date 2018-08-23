#include<stdio.h>
int main(void)
{
  float h;
  printf("Enter how much cm is your heigh: ");
  scanf("%f",&h);
  printf("So your heigh by inches is %e\n",h/2.54);
  return 0;
}
