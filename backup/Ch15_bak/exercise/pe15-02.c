#include <stdio.h>
#include <string.h>

int bstr_to_dec(const char *st);
char *itobs(int n, char *ps);
char *s_gets(char *st, int n);

#define SIZE 8

int main(void)
{
    char barray[SIZE];
        int val01;
        s_gets(barray, SIZE);

        val01 = bstr_to_dec(barray);
    printf("%d\n", val01);
    // s_gets(barray, SIZE);
    // val02 = bstr_to_dec(barray);
    // char answer_array[SIZE];
    // scanf("%s", &barray);
    // printf("(%d) | (%d) = %s\n", val01, val02,
    //        itobs(val01 | val02, answer_array));
           return 0;
}

int bstr_to_dec(const char *st)
{
    int val;
    while (*st != '\0')
        val = val * 2 + (*st++ - '0');

    return val;
}

char *itobs(int n, char *ps)
{
    int i;
    const static int size = SIZE;
    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';

    return ps;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }

    return ret_val;
}