#include <stdio.h>

int main(void)
{
    int flags;
    int mask = 2;       //(00000010)

    while (scanf("%d", &flags) == 1)
    {
        if ((flags & mask) == mask)
            printf("%d 's 2nd bit is 1\n");
    }

    return 0;
}