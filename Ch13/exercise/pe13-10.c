#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81

int main(void)
{
    FILE *fp;
    char file[SLEN];
    char ch;
    long address, last;

    puts("Enter the name fo the file to be processed: ");
    scanf("%80s", file);
    if ((fp = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "reverse can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    puts("Where you want to begin: ");
    
    fseek(fp, 0L, SEEK_END);
    last = ftell(fp);
    rewind(fp);
    while ((scanf("%ld", &address) == 1) && address >= 0L)
    {
        rewind(fp);
        if (address > last)
        {
            printf("The number is bigger than the file's size, put that again\n");
            continue;
        }
        fseek(fp, address, SEEK_SET);
        while ((ch = getc(fp)) != EOF && ch != '\n')
            putchar(ch);
        printf("\n");
    }
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");

    return 0;
}
