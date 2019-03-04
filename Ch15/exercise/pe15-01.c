#include <stdio.h>

int btois(char * str);

int main(void)
{
    char * pbin = "01001001";

    printf("%d\n",btois(pbin));
}

int btois(char * str)
{
    int val = 0;
    int i = 0;

    while (str[i])
        val = val * 2 + (str[i++] - '0');
    // printf("%d) %d\n", i, val);

    return val;
}