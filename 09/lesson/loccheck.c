#include <stdio.h>
void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;

    printf("In main(), pooh = %4d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah  = %4d and &bah  = %p\n", bah, &bah);
    mikado(pooh);

    return 0;
}

void mikado(int bah)
{
    int pooh = 10;

    printf("In mikado(), pooh = %2d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah  = %2d and &bah  = %p\n", bah, &bah);
}
