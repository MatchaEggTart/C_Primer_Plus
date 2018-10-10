#include <stdio.h>
#define SIZE 5
void copy_arr(double * target1, double * source, int n);
void copy_ptr(double * target2, double * source, int n);
void copy_ptrs(double * target3, double * source, double * source_last);

int main(void)
{
    int i;
    int n;
    double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];

    copy_arr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3, source, source + 5);

    printf("\nsource : ");
    for (i = 0; i < SIZE; i++)
        printf("%4.1f", source[i]);
    printf("\n");

    printf("\ntarget1: ");
    for (i = 0; i < SIZE; i++)
        printf("%4.1f", target1[i]);
    printf("\n");
    
    printf("\ntarget2: ");
    for (i = 0; i < SIZE; i++)
        printf("%4.1f", target2[i]);
    printf("\n");
    
    printf("\ntarget3: ");
    for (i = 0; i < SIZE; i++)
        printf("%4.1f", target3[i]);
    printf("\n");

    return 0;
}

void copy_arr(double * target1, double * source, int n)
{
    int j;
    for (j = 0; j < SIZE; j++)
        target1[j] = source[j];
}

void copy_ptr(double * target2, double * source, int n)
{
    int j;
    for (j = 0; j < SIZE; j++)
        *(target2++) = *(source++);    
}

void copy_ptrs(double * target3, double * source, double * source_last)
{
    while (source < source_last)
    {
        *(target3++) = *(source++);
    }
}
