#include<stdio.h>
int main(void)
{
    int n=0;
    printf("input a string :\n");
loop: if(getchar()!='\n')
    {
        n++;
        goto loop;
    }
    printf("%d\n",n);
    return 0;
}
