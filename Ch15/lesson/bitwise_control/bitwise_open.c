#include <stdio.h>

int main(void)
{
    int flags = 13;     //  (00001101)
    int mask = 2;       //| (00000010)
                        //  (00001111) = 15 ?
    printf("%d | %d = %d\n", flags, mask, flags | mask);

    return 0;
}