#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81

int main(int argc, char * argv[])
{
    FILE *fp;
    char str[SLEN];

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s string filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (fgets(str, SLEN, fp) != NULL)
    {
        if (strstr(str, argv[1]))
            fputs(str, stdout);
    }
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");


    return 0;
}
