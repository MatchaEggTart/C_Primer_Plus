#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 30

char * s_gets(char * st, int n);

int main(void)
{
    int ch;
    char filename[LEN];
    FILE * fp;
    int size;
    size = sizeof(char);
    printf("%d bytes\n", size);
    puts("Enter the file name.");
    s_gets(filename, LEN);

    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "%s can't open\n", filename);
        exit(1);
    }
    rewind(fp);
    while ((fread(&ch, size, 1, fp)) == 1 && ch != EOF)
    {
        putchar(ch);
    }
    /*
    ch = getc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = getc(fp);
    }
    */
    fclose(fp);
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
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
