#include <stdio.h>
#define COLS 5
#define ROWS 3
void copy_vla(int rows,int cols,int ar2[rows][cols],int(*ar1)[COLS]);
void display(int rows,int cols,int ar2[rows][cols]);

int main(void)
{
    int i,j;
    int ar2[3][5];
    int ar1[ROWS][COLS]={
	{1,2,3,4,5},
	{0,2,4,6,8},
	{1,3,5,7,9}
    };
    copy_vla(ROWS,COLS,ar2,ar1);
    display(ROWS,COLS,ar2);
    return 0;
}

void copy_vla(int rows,int cols,int ar2[rows][cols],int(*ar1)[COLS])
{
    int r,c;
    for(r=0;r<rows;r++)
	for(c=0;c<cols;c++)
	    ar2[r][c]=ar1[r][c];
}

void display(int rows,int cols,int ar2[rows][cols])
{
    int r,c;
    for(r=0;r<rows;r++)
    {
	for(c=0;c<cols;c++)
	    printf("%d,",ar2[r][c]);
	printf("\n");
    }
}
