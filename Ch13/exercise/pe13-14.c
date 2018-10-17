#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
#define COL 20
#define ROW 30
const char trans[10] = " .':~*=!%#";
int distortion(int pict[COL][ROW], int c, int r);
int abs_a(int n);

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
            printf("%c", trans[distortion(pict, c, r)]);
        }
        printf("\n");
    }
    if (fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");

    return 0;
}

int distortion(int pict[COL][ROW] , int c, int r)
{
    static int i;
    int ret_val;
    if (c != 0 && c != COL - 1 && r != 0 && r != ROW - 1)
    {
        if (abs_a(pict[c][r - 1] - pict[c][r]) > 1 &&	//left
            abs_a(pict[c][r + 1] - pict[c][r]) > 1 &&	//right
            abs_a(pict[c - 1][r] - pict[c][r]) > 1 &&	//up
            abs_a(pict[c + 1][r] - pict[c][r]) > 1)	//down
            ret_val = (pict[c][r - 1] + pict[c][r + 1] +
                       pict[c - 1][r] + pict[c + 1][r] +
                       pict[c][r]) / 5;
        else
            ret_val = (pict[c][r]);
    }
    else if (c == 0)
    {
        if (abs_a(pict[c][r - 1] - pict[c][r]) > 1 &&	//left
            abs_a(pict[c][r + 1] - pict[c][r]) > 1 &&	//right
            abs_a(pict[c + 1][r] - pict[c][r]) > 1)	//down
            ret_val = (pict[c][r - 1] + pict[c][r + 1] +
                       pict[c + 1][r] + pict[c][r]) / 4;
        else
            ret_val = (pict[c][r]);//(pict[c][r]);
    }
    else if (c == COL)
    {
        if (abs_a(pict[c][r - 1] - pict[c][r]) > 1 &&	//left
            abs_a(pict[c][r + 1] - pict[c][r]) > 1 &&	//right
            abs_a(pict[c - 1][r] - pict[c][r]) > 1)	//up
            ret_val = (pict[c][r - 1] + pict[c][r + 1] +
                       pict[c - 1][r] + pict[c][r]) / 4;
        else
            ret_val = (pict[c][r]);
    }
    else if (r == 0)
    {
        if (abs_a(pict[c][r + 1] - pict[c][r]) > 1 &&	//right
            abs_a(pict[c - 1][r] - pict[c][r]) > 1 &&	//up
            abs_a(pict[c + 1][r] - pict[c][r]) > 1)	//down
            ret_val = (pict[c - 1][r] + pict[c + 1][r] +
                       pict[c][r + 1] + pict[c][r]) / 4;
        else
            ret_val = (pict[c][r]);
    }
    else if (r == ROW)
    {
        if (abs_a(pict[c][r - 1] - pict[c][r]) > 1 &&	//left
            abs_a(pict[c - 1][r] - pict[c][r]) > 1 &&	//up
            abs_a(pict[c + 1][r] - pict[c][r]) > 1)	//down
            ret_val = (pict[c - 1][r] + pict[c + 1][r] +
                       pict[c][r - 1] + pict[c][r]) / 4;
        else
            ret_val = (pict[c][r]);
    }
    //   printf("\n%d\n", i++);
    if (ret_val > 9 || ret_val < 0)	//If have not this, it will happen
        ret_val = 0;			//Segmentation fault (core dumped)
    return ret_val;			//trans[15] = what?
}

int abs_a(int n)
{
    if (n > 0)
        return n;
    else
        return (-n);
}
