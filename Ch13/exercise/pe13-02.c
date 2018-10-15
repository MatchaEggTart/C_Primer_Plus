#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
#define BUFSIZE 4096
void append(FILE *source, FILE *dest);

int main(int argc, char * argv[])
{
    FILE *fa, *fs;
    char file_app[SLEN];
    char file_src[SLEN];
    char ch;
    
    if (argc != 3)
    {
        printf("Usage: %s file_source file_target\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    strcpy(file_src, argv[1]);
    strcpy(file_app, argv[2]);
    if ((fa = fopen(file_app, "a+")) ==NULL)
    {
        fprintf(stderr, "Can't open %s", file_app);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    if ((fs = fopen(file_src, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s", file_src);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
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
        putchar(ch);
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
