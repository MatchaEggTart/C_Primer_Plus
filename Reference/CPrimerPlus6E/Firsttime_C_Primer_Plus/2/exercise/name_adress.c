/*printf my name & adress*/
#include<stdio.h>
int main(void)
{
  char name[40],adress[40];
  printf("What is your name?\n");
  scanf("%s",&name);
  printf("Where are you living?\n");
  scanf("%s",&adress);
  printf("Your name is %s.\nYour adress is %s\n",name,adress);
  return 0;
}
