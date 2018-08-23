#include<stdio.h>
void br(void);
void ic(void);
int main()
{
  br();
  printf(", ");
  ic();
  printf("\n");
  ic();
  printf(",\n");
  br();
  printf("\n");
}
void br()
{
  printf("Brazil, Russia");
}
void ic()
{
  printf("India, China");
}
