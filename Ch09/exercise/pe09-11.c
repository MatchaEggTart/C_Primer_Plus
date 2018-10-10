#include <stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
    unsigned n;
    
    printf("Give me a number, please:");
    scanf("%u", &n);
    printf("\nSo the Fibonacci for %u is %lu\n", n, Fibonacci(n));

    return 0;
}

unsigned long Fibonacci(unsigned n)
{

    unsigned long sum, first, next;
    unsigned i;
    
    for (i = 2, sum = 1, first = 1; i < n; i++)
    {
        next = sum;
        sum = first + next;
        first = next;
    }

    return sum;
}
