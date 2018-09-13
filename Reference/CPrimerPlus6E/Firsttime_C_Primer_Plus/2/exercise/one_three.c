#include<stdio.h>
void two(void);
int main(void)
{
  printf("starting now:\none\n");
  two();
  printf("\nthree\ndone!\n");
  return 0;
}
void two(void)
{
  printf("tow");
}
