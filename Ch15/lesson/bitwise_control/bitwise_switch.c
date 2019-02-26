#include <stdio.h>

int main(void)
{
    int flags = -74;    //(10110110)
    int mask = 2;       //(00000010)
                        // x = a ^ 1; x = ~a; (x and a is a bit)
                        //(10110100) = -(01001100) = -76 ?
    printf("%d ^ %d = %d\n", flags, mask, flags ^ mask);

    return 0;
}