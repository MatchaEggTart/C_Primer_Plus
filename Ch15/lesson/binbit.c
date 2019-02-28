#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
void show_bstr(const char *);

int main(void)
{
    char bin_str[CHAR_BIT * sizeof(int) + 1];           //bin_str[0] -> bin_str[32]; They has 33

    int number;

    puts("Enter intergers and see them in binary.");
    puts("Nom-numeric input terminates program.");
    while (scanf("%d", &number) == 1)
    {
        itobs(number, bin_str);
        printf("%-5d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);     //bin_str[MAX] = 32;

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (n & 01) + '0';
    ps[size] = '\0';

    return ps;
}

void show_bstr(const char * str)
{
    int i = 0;

    while (str[i])
    {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i])
            putchar(' ');
    }
}