#include <stdio.h>

int main(void)
{
    int mask = 1;
    int flag = -106;    //  (10010110)

    mask = mask << 1;   //& (00000010)
                        //  (00000010) = 2 ?
    printf("%d & %d = %d\n", flag, mask, flag & mask);

    return 0;
}