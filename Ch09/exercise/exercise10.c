#include <stdio.h>
void to_binary_n(unsigned long num, unsigned long n);

int main(void)
{
    unsigned long number, n;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu %lu", &number, &n) == 2 && ((n > 1) && (n < 10)))
    {
        printf("Binary equivalent: ");
        to_binary_n(number, n);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary_n(unsigned long num, unsigned long n)
{
    int r;
    r = num % n;
    if (num >= n)
        to_binary_n(num / n, n);
    printf("%d", r);

}
