#include <stdio.h>
int main(void)
{
    char p1[]="Klingon";
    p1[0]='F';//ok?
    printf("Klingon");
    printf(": Beware the %ss!\n","Klingon");
    printf(": Beware the %ss!\n",p1);
    return 0;
}

