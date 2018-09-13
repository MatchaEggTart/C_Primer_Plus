#include <stdio.h>
#define SIZE 4
void addtogether(int n, int * target, int * source1, int * source2);

int main(void)
{
    int source1[SIZE] = { 2, 4, 5, 8 };
    int source2[SIZE] = { 1, 0, 4, 6 };
    int n, i;
    int target[n];

    printf("How long for the target array?\n");
    scanf("%d", &n);
    if (n < 1 || n > 4)
        printf("Wrong!\n");
    else
    {
        addtogether(n, target, source1, source2);
        for(i = 0; i < n; i++)
        {
            printf("%d ", target[i]);
        }
        printf("\n");
    }

    return 0;
}

void addtogether(int n, int * target, int * source1, int * source2)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        *(target++) = *(source1++) + *(source2++);
    }
}
