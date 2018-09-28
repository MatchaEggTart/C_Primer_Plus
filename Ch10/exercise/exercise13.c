#include <stdio.h>

void  enter_number(int row, int col, double array[row][col]);
double  mean(int row, int col, double array[row][col]);
double find_biggest(int row, int col, double array[row][col]);

int main(void)
{
    int row, col;
    char ch;
    int i;

    
    printf("\nPlz enter the number of rows\n");
    while((scanf("%d", &row)) != 1)
    {
        while ((ch = getchar()) != '\n')
        {   putchar(ch);
            printf(" is no a number! Please Enter again!\n");
        }
    }
    printf("\nPlz enter the number of cols\n");
    while((scanf("%d", &col)) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
            printf(" is no a number! Please Enter again!\n");
        }
    }

    double array[row][col];

    //get the number
    enter_number(row, col, array);

    //printf the mean for every row
    for (i = 0; i < row; i++)
    {
        printf("Row %d's mean is\n", i + 1);
        printf("%.2f\n",  (mean(i, col, array)));
    }

    //find the biggest one in the array
    printf("\nThe biggest elements is %.2f\n\n", find_biggest(row, col, array));
    return 0;
}

void  enter_number(int row, int col, double array[row][col])
{
    int r, c, n;
    char ch;
    
    for (r = 0; r < row; r++)
    {
        printf("Row %d\n", r + 1);
        for (c = 0; c < col; c++)
            while ((scanf("%lf", &array[r][c]) != 1 ))
            {
                while ((ch = getchar()) != '\n')
                {
                    putchar(ch);
                    printf(" is no a number! Please Enter again in array[%d][%d]!\n", r + 1, c + 1);
                }
            }
    }
    for (r = 0; r < row; r++)
    {
        printf("Row %2d  :   ", r + 1);
        for (c = 0; c < col; c++)
            printf("%8.2f   ", array[r][c]);
        printf("\n");
    }
}

double  mean(int row, int col, double array[row][col])
{
    int  c;
    double tot = 0.0;
    
    for (c = 0; c < col; c++)
    {
        tot += array[row][c];        
    }

    return (tot / col);
}

double find_biggest(int row, int col, double array[row][col])
{
    int r, c;
    double big = array[0][0];

    for (r = 0; r < row; r++)
        for (c = 0; c < col; c++)
            if (array[r][c] > big)
                big = array[r][c];
    return big;
}
