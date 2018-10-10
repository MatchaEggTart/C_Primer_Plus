#include <stdio.h>
int try(void);

int main(void)
{
    int times, i, j;

    scanf("%d", &times);
    for (i = 0; i < times; i++)
	try();
    puts("And");
    j = try();
    printf("How many times for using try()\n%d\n", j); 
    return 0;
}

int try(void)
{
    static int i = 0;

    printf("Hello World!\n");
    i++;

    return i;
}

