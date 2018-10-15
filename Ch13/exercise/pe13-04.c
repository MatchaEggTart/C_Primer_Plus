#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i;
    FILE * fp;
    char ch;

    if (argc < 2)
    {
        printf("Usage: %s filename(s)\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for (i = 1; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("Can't open %s, maybe it's not exist\n", argv[i]);
            continue;	//If file no exist, flose() will destroy something, So need to use continue to jump
        }
        while ((ch = getc(fp)) != EOF)
            putchar(ch);
        if (fclose(fp) != 0)
            printf("Could not close %s\n", argv[i]);
    }
    printf("Done!\n");

    return 0;
}
