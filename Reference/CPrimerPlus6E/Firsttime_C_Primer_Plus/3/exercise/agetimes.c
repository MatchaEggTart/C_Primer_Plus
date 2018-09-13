#include<stdio.h>
int main(void)
{
  double age,times;
  printf("Enter you age: ");
  scanf("%lf",&age);
  times=3.156E7*age;
  printf("So seconds is %e\n",times);
  return 0;
}
