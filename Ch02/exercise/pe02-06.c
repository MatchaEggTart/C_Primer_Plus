#include <stdio.h>
int main(void)
{
    int toes;
    printf("Input the toes: ");
    scanf("%d", &toes);
    printf("So \ntoes * 2 = %5d\ntoes ^ 2 = %5d\n", toes * 2, toes * toes);

    return 0;
}
