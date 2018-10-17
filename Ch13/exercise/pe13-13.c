#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
const char trans[10] = " .':~*=!%#";
int main(void)
{
    FILE *fp;
    char file[SLEN];
    int col, row, c, r;
    char ch;
    // printf("%d col\n%d row\n", col, row);
    puts("Type the file name to be pocessed: ");
    scanf("%80s", file);
    //    char file[SLEN] = "pe13-12-text";
    if ((fp = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s\n"
                "Maybe it's not exist\n", file);
        exit(EXIT_FAILURE);
    }
    row = 0;
    col = 2;

    while ((ch = getc(fp)) != '\n')
    {
        if (ch != ' ')
            row++;
    }
    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
            col++;
    }

    int pict[col][row];	/*必须在这里声明，不然col，row皆为0，
                        存不了数
                        */
    rewind(fp); //important
    // printf("%d col\n%d row\n", col, row);
    for (c = 0; c < col; c++)
    {
        for (r = 0; r < row; r++)
        {
            fscanf(fp, "%d", &pict[c][r]);
        }
    }
    /*
    for (c = 0; c < col; c++)
    {
        for (r = 0; r < row; r++)
        {
            printf("%d ", pict[c][r]);
        }
        printf("\n");
    }
    */
    for (c = 0; c < col; c++)
    {
        for (r = 0; r < row; r++)
        {
            printf("%c", trans[pict[c][r]]);
        }
        printf("\n");
    }
    if (fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");
      
    return 0;

}
