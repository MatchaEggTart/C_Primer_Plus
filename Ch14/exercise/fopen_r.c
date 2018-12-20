#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE * fp;

    fp = fopen("try", "w");
    ch = getc(fp);
    while (( ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    
    return 0;
}
