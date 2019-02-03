#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
void showstr(char *);

int invert_end(int num, int bits);

int main(void)
{
    int number;
    char bin_str[CHAR_BIT * sizeof(int) + 1];

    puts("Enter the number");
    while (scanf("%d", &number) == 1)
    {
        printf("%d is\n", number);
        itobs(number, bin_str);
        showstr(bin_str);
        puts("\ninvert!");
        number = invert_end(number, 4);
        showstr(itobs(number, bin_str));
        puts("\nEnter the number");        
    }
    puts("Bye!");

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}

void showstr(char * str)
{
    int i = 0;

    while (str[i])
    {
        putchar(str[i]);
        if (++i % 4 == 0 /* && str[i] */)
            putchar(' ');
    }
}


int invert_end(int num, int bits)
{
    int mask = 0;
    int bitval = 1;

    while (bits-- > 0)
    {
        mask |= bitval;
        //        printf("mask = %d\n", mask);
        bitval <<= 1;
        //        printf("bitval = %d\n", bitval);
    }

    //    printf("num ^ mask = %d\n", num ^ mask);
    return (num ^ mask);
}
