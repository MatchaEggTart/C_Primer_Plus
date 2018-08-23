#include <stdio.h>
#define ROWS 3
#define COLS 5
void input(int ar[][COLS],int rows);
void display(int ar[][COLS],int rows);
void line_average(int ar[][COLS],int rows);
void all_average(int ar[][COLS],int rows);
void max(int ar[][COLS],int rows);
void ppg(void);

int main(void)
{
    int ar[ROWS][COLS];
    char ch;
    printf("输入3X5的数组\n");
    input(ar,ROWS);
    ppg();
    while((ch=getchar())!='q')
    {
	switch(ch)
	{
	    case'a':
		input(ar,ROWS);
		ppg();
		continue;
	    case'b':
		line_average(ar,ROWS);
		ppg();
		continue;
	    case'c':
		all_average(ar,ROWS);
		ppg();
		continue;
	    case'd':
		max(ar,ROWS);
		ppg();
		continue;
	    case'e':
		display(ar,ROWS);
		ppg();
		continue;
	    default:break;
	}
    }
    printf("Bye\n");
    return 0;
}

void input(int ar[][COLS],int rows)
{
    printf("INPUT please!\n");
    int i,j;
    for(i=0;i<rows;i++)
    {
	printf("       1     2     3     4     5\n");
	printf("Row %d ",i+1);
	for(j=0;j<COLS;j++)
	{
	    scanf("%4d",&ar[i][j]);
	}
    }
    
}

void display(int ar[][COLS],int rows)
{
    int i,j;
    printf("Output!\n");
    for(i=0;i<rows;i++)
    {
	printf("Row %d ",i+1);
	for(j=0;j<COLS;j++)
	{
	    printf("%d,",ar[i][j]);
	}
	printf("\n");
    }
}

void line_average(int ar[][COLS],int rows)
{
    int i,j,line;
    printf("每行平均值\n");
    for(i=0;i<rows;i++)
    {
	line=0;
	printf("Row %d ",i+1);
	for(j=0;j<COLS;j++)
	{
	    line+=ar[i][j];
	}
	printf("%.2f\n",(float)line/5);
    }
}

void all_average(int ar[][COLS],int rows)
{
    int i,j;
    int tot=0;
    printf("所有数平均值:\n");
    for(i=0;i<rows;i++)
    {
	for(j=0;j<COLS;j++)
	    tot+=ar[i][j];
    }
    printf("%.2f\n",(float)tot/15);
}

void max(int ar[][COLS],int rows)
{
    int i,j;
    int max=0;
    for(i=0;i<rows;i++)
    {
	for(j=0;j<COLS;j++)
	    max=(max>ar[i][j])?max:ar[i][j];
    }
    printf("最大值\n%d\n",max);
}

void ppg(void)
{
    printf("a.输入3X5的数组\n");
    printf("b.计算每组数据平均值\n");
    printf("c.计算所有数据平均值\n");
    printf("d.找出最大数\n");
    printf("e.打印结果\n");
}
