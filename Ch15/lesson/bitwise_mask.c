#include <stdio.h>

int main(void)
{
    int flags;
    int MASK;
    
    MASK = 2;
    flags = -105;
    flags &= MASK;
    printf("flags = %d\n", flags);

    return 0;
}
