#include <stdio.h>

int main(void)
{
    int sweet = 16;
    int ooosw;

    ooosw = sweet << 3;
    sweet >>= 3;

    printf("ooosw = %d, sweet = %d\n", ooosw, sweet);

    return 0;
}
