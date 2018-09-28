#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_arr(int rows, int cols, int target[rows][cols], int source[rows][cols]);
void prin_arr(int rows, int cols, int target[rows][cols]);

int main(void)
{
    int rs = 3;
    int cs = 5;
    int source[ROWS][COLS] = {
        { 1, 2, 3, 4, 5 },
        { 3, 4, 5, 6, 7 },
        { 5, 6, 7, 8, 9 }
    };
    int varr[rs][cs];

    copy_arr(rs, cs, varr, source);
    prin_arr(rs, cs, varr);

    return 0;
}

void copy_arr(int rows, int cols, int target[rows][cols], int source[rows][cols])
{
    int r;
    int c;

    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            target[r][c] = source[r][c];
}

void prin_arr(int rows, int cols, int target[rows][cols])
{
    int r;
    int c;

    for (r = 0; r < rows; r++)
    {
        printf("Row %2d : ", rows + 1);
        for (c = 0; c < cols; c++)
        {
            printf("%2d ", target[r][c]);
        }
        printf("\n");
    }
}
