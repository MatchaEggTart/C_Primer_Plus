#include <stdio.h>

int main(void)
{
    int a = -109;   //  (10010011)
    int b = 61;     //^ (00111101)
                    //  (10101110) =  -82 ?
    printf("%d ^ %d = %d\n", a, b, a ^ b);

    return 0;
}