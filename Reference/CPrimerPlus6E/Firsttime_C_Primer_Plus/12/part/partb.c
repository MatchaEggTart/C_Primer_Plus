#include <stdio.h>

extern int count;//count no in this file

static int total =0;//static variable
void accumulate(int k);

void accumulate(int k)
{
    static int subtotal =0;//static ,no linkate

    if(k<=0)
    {
        printf("loop cycle: %d\n",count);
        printf("subtotal: %d; total: %d\n",subtotal,total);
        subtotal=0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
