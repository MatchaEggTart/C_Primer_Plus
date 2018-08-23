#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    printf("\n%d\n",rand());
    srand(time(0));
    printf("\n%d\n",rand());
    return 0;
}
