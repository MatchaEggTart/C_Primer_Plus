#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
char * s_gets(char * st, int n);

int main(void)
{
    FILE *in, *out;
    int ch;
    char target[LEN];
    char source[LEN];
    int count = 0;

    printf("What's the name of the file which use to compress\n");
    s_gets(source, LEN);
    if ((in = fopen(source, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s\n", source);
        exit(EXIT_FAILURE);
    }
    strncpy(target, source, LEN -5);
    target[LEN - 5] = '\0';
    strcat(target, ".red");
    if ((out = fopen(target, "w")) == NULL)
    {
        fprintf(stderr, "Can't create the file %s\n", target);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);
    if (fclose(in) != 0 && fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

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
