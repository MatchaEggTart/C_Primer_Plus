#include <stdio.h>
#include <limits.h>

char * itobs(int n, char * ps);
void show_bstr(const char * str);

int main(void)
{
    int number;
    char bin_str[CHAR_BIT * sizeof(int) + 1];
    printf("a = %d\n", CHAR_BIT * sizeof(int) + 1);
    puts("Input the number");
    while ((scanf("%d", &number) == 1))
    {
        while (getchar() != '\n')
            continue;
        itobs(number, bin_str);
        puts("The binary is:");
        show_bstr(bin_str);
        puts("\nInput the number");
    }

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);
    printf("b = %d\n", size);
    for (i = size - 1; i >= 0; i--, n >>= 1)
    {
        ps[i] = (1 & n) + '0';
    }
    ps[size] = '\0';
    printf("\nc = %c", ps[32]);

    return ps;
}
void show_bstr(const char * str)
{
    int i = 0;
    
    while (str[i])
    {
        putchar(str[i]);
        if ((i + 1) % 4 == 0 && i != 0)
            putchar(' ');
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
