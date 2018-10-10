#include <stdio.h>
static unsigned long int next = 1;

unsigned int rand0(void)
{
    next = next * 1103515245 + 12345;
    printf("next is %d\n", next);
    return (unsigned int) (next/65536) % 32768;
}
