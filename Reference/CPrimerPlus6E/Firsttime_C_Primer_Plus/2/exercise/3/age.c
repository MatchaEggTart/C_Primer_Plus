/*Change your years how old you are to be days*/
#include<stdio.h>
int main(void)
{
  int years,days;
  printf("How old you are?\n");
  scanf("%d",&years);
  days=years*365;
  printf("It's equal %d days.\n",days);
  return 0;
}
