#include <stdio.h>

int main(void)
{
    int i = 5;

    for (int i = 0; i < 4; i++)
	printf("%p\n", &i);
    printf("The i is %p\nbye\n", &i);

    return 0;
}
