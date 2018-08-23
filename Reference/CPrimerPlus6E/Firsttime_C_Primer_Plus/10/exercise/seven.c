#include <stdio.h>
#define COLS 2
#define ROWS 3
void copy_ptr(double target[],double source[],int n);

int main(void)
{
    int i,j;
    double source[ROWS][COLS]={
	{1.1,2.2},
	{3.3,4.4},
	{5.5,6.6}
    };
    double target[ROWS][COLS];
    for(i=0;i<ROWS;i++)
    copy_ptr(*(target+i),*(source+i),COLS);
    for(i=0;i<ROWS;i++)
    {
	for(j=0;j<COLS;j++)
	    printf("%.2f ",target[i][j]);
	printf("\n");
    }
    return 0;
}


void copy_ptr(double target[],double source[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
	*target=*source;
	source++;
	target++;
    }

}
