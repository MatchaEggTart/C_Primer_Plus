#include <stdio.h>
#include <limits.h>

char * itobs(int n, char * ps);
void show_bstr(const char * str);

int main(void)
{
    int number;
    char bin_str[CHAR_BIT * sizeof(int) + 1];

    puts("Input the number");
    while ((scanf("%d", &number) == 1))
    {
        while (getchar() != '\n')
            continue;
        itobs(number, bin_str);
        puts("The binary is:");
        show_bstr(bin_str);
    }

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size; i >= 0; i--, n >> 1)
    {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';

    return ps;
}
void show_bstr(const char * str)
{
    int i = 0;
    while (str[i])
    {
        putchar(str[i]);
        i++;
    }
}

/*
    while ((scanf("%d", &number) == 1))
    {
        getchar();
        itobs(number, bin_str);
        puts("The binary is:");
        show_bstr(bin_str);
    }


    while ((scanf("%d", &number) == 1))
    {
        while (getchar() != '\n')
            continue;
        itobs(number, bin_str);
        puts("The binary is:");
        show_bstr(bin_str);
    }
*/
