#include <stdio.h>
#define SIZE 7
void copy_ptrs(double * target, double * source, double * source_last);

int main(void)
{
    int i;
    int n;
    double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
    double target[3];

    copy_ptrs(target, source, source + 3);

    printf("\nsource : ");
    for (i = 0; i < SIZE; i++)
        printf("%4.1f", source[i]);
    printf("\n");

    printf("\ntarget : ");
    for (i = 0; i < sizeof target / sizeof target[0]; i++)
        printf("%4.1f", target[i]);
    printf("\n");

    return 0;
}

void copy_ptrs(double * target, double * source, double * source_last)
{

    while (source < source_last)
    {
        *(target++) = *(source + 2);
        source++;
    }
}
