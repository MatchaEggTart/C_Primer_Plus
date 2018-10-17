#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
#define COL 20
#define ROW 30
const char trans[10] = " .':~*=!%#";
int main(void)
{
    FILE *fp;
    char file[SLEN];
    int pict[COL][ROW];
    int c, r;
    
    puts("Type the file name to be pocessed: ");
    scanf("%80s", file);
    if ((fp = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s\n"
                "Maybe it's not exist\n", file);
        exit(EXIT_FAILURE);
    }
    
    for (c = 0; c < COL; c++)
    {
        for (r = 0; r < ROW; r++)
        {
            fscanf(fp, "%d", &pict[c][r]);
        }
    }
    for (c = 0; c < COL; c++)
    {
        for (r = 0; r < ROW; r++)
        {
            printf("%c", trans[pict[c][r]]);
        }
        printf("\n");
    }
    if (fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");

    return 0;
}
