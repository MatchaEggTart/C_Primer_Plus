// check MASK N.01 bit is 1?
#include <stdio.h>

int main(void)
{
    int flags = 2;

    int MASK;
    while (scanf("%d", &MASK) == 1)
    {
        if ((flags & MASK) == flags)
            puts("Yeah");
    }

    return 0;
}
