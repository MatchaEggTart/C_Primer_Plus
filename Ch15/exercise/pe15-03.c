#include <stdio.h>
#include <limits.h>

int check_open_bit(int);

int main(void)
{
    int number;

    printf("Enter an integer.\n");
    while (scanf("%d", &number) == 1)
    {
        printf("%d has open %d bits.\n", number, check_open_bit(number));
        printf("Enter an integer.\n");
    }
    puts("Done.");

    return 0;
}

int check_open_bit(int n)
{
    const static int size = CHAR_BIT * sizeof(int);
    int i;
    int sum = 0;

    for (i = 0; i < size; i++, n >>= 1)
        if ((n & 01) == 01)
            sum++;

    return sum;
}