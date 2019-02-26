#include <stdio.h>

int main(void)
{
    int flags = 15;     //  (00001111)
    int mask = -74;     //&~(10110110) = &(01001001)
                        //  (00001001) = 9 ?
    printf("%d\n%d & ~ %d = %d\n",~mask, flags, mask, flags & ~mask);

    return 0;
}