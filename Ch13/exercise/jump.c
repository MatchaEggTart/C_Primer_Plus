#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 81
char * s_gets(char * st, int n);

int main(void)
{
    FILE *fp;
    int ch;
    char target[LEN];
    int i = -1;
    
    printf("What!\n");
    s_gets(target, LEN);
    fp = fopen(target, "r");
    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
            i *= -1;
        if (i == -1)
            putchar(ch);
    }

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            * find = '\0';
        else
            while (getchar() != EOF)
                continue;
    }

    return ret_val;
}
