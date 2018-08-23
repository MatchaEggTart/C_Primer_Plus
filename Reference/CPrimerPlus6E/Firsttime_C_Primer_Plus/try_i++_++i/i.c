#include <stdio.h>
int main(void)
{
    int a;
    int *i;
    int urn[5]={100,200,300,400,500};
    i=&urn[2];
    printf("%p\n",i);
    printf("%p\n",i--);
    return 0;
}
