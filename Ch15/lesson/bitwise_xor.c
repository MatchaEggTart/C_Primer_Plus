#include <stdio.h>

int main(void)
{
    int a;
    int b;
    a = -109;	//(10010011)2
    b = 61;	//(00111101)2
    printf("(10010011) ^ (00111101) = (10101110)\n");
    puts("(10101110)2 = (-82)10");
    printf("-109 ^ 61 = %d\n", a ^ b);

    a ^= b;
    printf("a ^= b\na = %d\n", a);
    return 0;
}
