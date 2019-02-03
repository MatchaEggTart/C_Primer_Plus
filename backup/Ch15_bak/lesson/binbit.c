#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
void show_bstr(const char *);

int main(void)
{
    char bin_str[(CHAR_BIT * sizeof(int)) + 1];		// 33, bin_str[32] = '\0', bin_str[0] ~ bin_str[31]
    int number;

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");

    while (scanf("%d", &number) == 1)
    {
        itobs(number, bin_str);
        printf("%6d   is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");

    return 0;
}

char * itobs(int n, char * ps)
{
    const static int size = CHAR_BIT * sizeof(int);	// 32
    int i;


    for (i = size - 1; i >= 0; i--, n >>= 1)		// i = 31, 0~31 has 32 elements
        ps[i] = (01 & n) + '0';

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
