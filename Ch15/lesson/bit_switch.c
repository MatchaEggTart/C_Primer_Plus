// switch the N.0~N.3 bit
// flags = (00001111) =  15
// MASK  = (10110110) = -74

#include <stdio.h>

int main(void)
{
    int flags;
    int MASK;
    
    MASK = -74;
    flags = 15;
    puts("(00001111) ^ (10110110))");
    puts("    15     ^     -74");
    puts("=     (10111001)");
    puts("=          -71?");
            
    flags = flags ^ MASK;
    printf("flags = %d\n", flags);

    return 0;
}
