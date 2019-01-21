// close the N.3 and the N.1 bits
// (00001010)2 = (10)10
#include <stdio.h>

int main(void)
{
    int flags;
    int MASK;
    
    MASK = 10;
    flags = 2;
    puts("(00000010) & ~(00001010)");
    puts("     2     &     ~10");
    puts("=     (00000000)");
    puts("=          0?");
            
    flags = flags & ~MASK;
    printf("flags = %d\n", flags);

    return 0;
}
