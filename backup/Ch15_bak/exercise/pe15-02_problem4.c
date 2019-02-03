#include <stdio.h>
#include <string.h>

int bstr_to_dec(const char *st);
char *itobs(int n, char *ps);
char *s_gets(char *st, int n);

#define SIZE 8

int main(void)
{
    char barray_01[SIZE];
    char barray_02[SIZE];
    s_gets(barray_01, SIZE);
    s_gets(barray_02, SIZE);
    char answer_array[SIZE];
    int val01, val02;
    // scanf("%s", &barray);
    val01 = bstr_to_dec(barray_01);
    printf("%d\n", val01);
    val02 = bstr_to_dec(barray_02);
    printf("%s(%d) | %s(%d) = %s\n", barray_01, val01, barray_02, val02,
           itobs(val01 | val02, answer_array));
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