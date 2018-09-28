#include <stdio.h>
int main(void)
{
    float age;
    scanf("%f", &age);
    printf("So %.00f year(s) = %.3e seconds\n", age, age * 3.156e7);

    return 0;
}
