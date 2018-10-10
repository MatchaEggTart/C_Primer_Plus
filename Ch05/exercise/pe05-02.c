#include <stdio.h>

int main(void)
{
    const int distance = 10;
    int inp, end;

    printf("Input a number, plz :");
    scanf("%d", &inp);
    end = inp + distance;
    inp = inp - 1;
    while (inp++ < end)
    {
        printf("%d ", inp);
    }
    printf("\n");

    return 0;
}
