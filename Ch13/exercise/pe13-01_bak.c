#include <stdio.h>
#include <stdlib.h>		//offer exit()
#include <string.h>
#define SLEN 81
char *s_gets(char * st, int n);

int main(void)
{
    int ch;
    FILE *fp;
    char file_src[SLEN];
    unsigned long count = 0;

    printf("Type the filename to read.\n");
    s_gets(file_src, SLEN);
    if ((fp = fopen(file_src, "r+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_src);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);	// = putchar(ch);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", file_src, count);

    return 0;
}

