#include <stdio.h>
#define ROWS 5
#define COLS 2
void copy_arr(double  target[ROWS][COLS], double  source[ROWS][COLS], int n);

int main(void)
{
    int row, col;
    int n;
    double source[ROWS][COLS] = {
        { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 }, { 9, 0 }
    };
    double target[ROWS][COLS];
    copy_arr(target, source, ROWS);

    for (row = 0; row < ROWS; row++)
    {
        printf("Row %d :  ", row + 1);
        for (col = 0; col < COLS; col++)
            printf("%3.2f ", target[row][col]);
        printf("\n");
    }

    return 0;
}

void copy_arr(double  target[ROWS][COLS], double  source[ROWS][COLS], int n)
{
    int r, c;
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < COLS; c++)
            target[r][c] = source[r][c];
    }
}
