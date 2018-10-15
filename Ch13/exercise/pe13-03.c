#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SLEN 81
#define BUFSIZE 4096
void append(FILE * source, FILE * dest);
char * s_gets(char * st, int n);

int main(void)
{
    FILE *fa, *fs;
    char file_app[SLEN];
    char file_src[SLEN];
    char ch;

    printf("What's the file name of source?\n");
    s_gets(file_src, SLEN);
    if ((fs = fopen(file_src, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_src);
        exit(EXIT_FAILURE);
    }
    
    if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    printf("What's the file name of copy?\n");
    s_gets(file_app, SLEN);
    if ((fa = fopen(file_app, "a+")) ==NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(EXIT_FAILURE);
    }

    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (strcmp(file_src, file_app) == 0)
    {
        fputs("Can't copy file to itself\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    append(fs, fa);
    if (ferror(fs) != 0)
        fprintf(stderr, "Error in reading file %s.\n", file_src);
    if (ferror(fa) != 0)
        fprintf(stderr, "Error in reading file %s.\n", file_app);
    fclose(fs);
    rewind(fa);
    while ((ch = getc(fa)) != EOF)
        putchar(toupper(ch));
    puts("Done!");
    fclose(fa);

    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
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
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
