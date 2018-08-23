#include <stdio.h>

int main(void)
{
    float num;
    printf("\ninput a float: _______\b\b\b\b\b\b\b ");
    scanf("%f", &num);
    printf("so\n%.2f == %.2e\n", num, num);
    return 0;
}
