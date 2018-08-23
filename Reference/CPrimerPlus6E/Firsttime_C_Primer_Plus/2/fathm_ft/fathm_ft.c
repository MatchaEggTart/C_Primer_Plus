//fathm_ft.c --把2音寻转换成英寸
#include<stdio.h>
int main(void)
{
  float feet,fathoms;
  scanf("%f",&fathoms);
  feet=6*fathoms;
  printf("There are %f feet in %f fathoms!\n",feet,fathoms);
  printf("Yes,I said %f feet!\n",6*fathoms);
  return 0;
}
