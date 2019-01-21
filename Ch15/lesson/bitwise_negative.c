#include <stdio.h>

int main(void)
{
    int val = 0;
    int newval;
    newval = ~val;
    printf("newval = %d\n", newval);
    printf("~val   = %d\n", ~val);
    return 0;
}
