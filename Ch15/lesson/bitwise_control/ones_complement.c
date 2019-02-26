// Use the ones complement to check the
// computer use which method to save the sign-int
// make a variable is 2 (00000010), ~2 (11111101)
// (1)sign-magnitude    : ~2 = -125
// (2)two's-complement  : ~2 = -3
// (3)one's-complement  : ~2 = -2

#include<stdio.h>

int main(void)
{
    int a = 2;

    printf("if a = %2d\n", a);
    printf("  ~a = %2d\n", ~a);

    return 0;
}