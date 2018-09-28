#include <stdio.h>
#define SIZE 30

int main(void)
{
  char name[SIZE];
  float heigh;

  printf("Input your name:\n");
  scanf("%s", name);
  printf("Input your heigh:\n");
  scanf("%f", &heigh);
  printf("\n%s, you are %.3 m tall\n\n", name, heigh * 2.54 / 100);

  return 0;
}
