#include <stdio.h>
#include <string.h>

int btois(char * str);
char * s_gets(char * st, int n);

int main(void)
{
    //char * pbin = "01001001";
    char pbin[8];
    s_gets(pbin, 8);

    printf("%d\n",btois(pbin));
}

int btois(char * str)
{
    int val = 0;
    int i = 0;

    while (str[i])
    {
        val = val * 2 + (str[i++] - '0');
    printf("%d) %d\n", i, val);
    }
    return val;
}

char * s_gets(char * st, int n)
{
    char * find;
    char * ret_val;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
            continue;
        }
        
    }

    return ret_val;
}