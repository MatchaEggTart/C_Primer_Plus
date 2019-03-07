#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
int rotate_1(int , int);

int main(void)
{
    int number, offset;
    char bin_str[CHAR_BIT * sizeof(int) + 1];

    printf("Enter an integet.\n");
    scanf("%d", &number);
    printf("Enter the offset.\n");
    scanf("%d", &offset);
    printf("%s\n", itobs(number, bin_str));
    printf(">>>>> %d\n", offset);
    printf("%s\n", itobs(rotate_1(number, offset), bin_str));

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (n & 01) + '0';
    ps[size] = '\0';

    return ps;
}

int rotate_1(int n, int site)
{
    const static int size = CHAR_BIT * sizeof(int);
    int a = n;
    int b = n;

    a >>= (size - site);
    b <<= site;

    return (a | b);
}