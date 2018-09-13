/*调用姓名*/
#include<stdio.h>
int main(void)
{
  char lastname[40],name[40];
  printf("What is you lastname?\n");
  scanf("%s",lastname);
  printf("What is you name?\n");
  scanf("%s",name);
  printf("%s %s\n",lastname,name);
  printf("%s\n",lastname);
  printf("%s\n",name);
  printf("%s %s\n",lastname,name);
  return 0;
}
