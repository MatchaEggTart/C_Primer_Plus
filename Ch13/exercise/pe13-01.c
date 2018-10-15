#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
char * s_gets(char * st, int n);

int main(void)
{
    FILE *fp;
    char file_name[SLEN];
    unsigned int count = 0;
    char ch;

    printf("Type the file name.\n");
    s_gets(file_name, SLEN);
    if ((fp = fopen(file_name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    printf("%s file has %d character\n", file_name, count);
    fclose(fp);
    
    return 0;
}

char * s_gets(char * st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            * find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
