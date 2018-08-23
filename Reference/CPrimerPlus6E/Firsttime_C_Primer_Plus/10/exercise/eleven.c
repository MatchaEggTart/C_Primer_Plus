#include <stdio.h>
#define ROWS 3
#define COLS 5
void doub(int (*ar1)[COLS],int rows);
void display(int (*ar1)[COLS],int rows);

int main(void)
{
    int ar1[3][5]={
	{0,1,2,3,4},
	{5,6,7,8,9},
	{10,11,12,13,14}
    };
    display(ar1,ROWS);
    doub(ar1,ROWS);
    display(ar1,ROWS);
    return 0;
}

void display(int (*ar1)[COLS],int rows)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
	for(j=0;j<COLS;j++)
	    printf("%5d ",ar1[i][j]);
	printf("\n");
    }
}

void doub(int (*ar1)[COLS],int rows)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
	for(j=0;j<COLS;j++)
	    *(*(ar1+i)+j)=(*(*(ar1+i)+j))*(*(*(ar1+i)+j));
    }
}
