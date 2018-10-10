#include <stdio.h>
int main(void)
{
    int x = 30;

    printf("x in outer block: %3d at %p\n", x, &x);
    {
	int x = 77;
	printf("x in outer block: %3d at %p\n", x, &x);
    }
    printf("x in outer block: %3d at %p\n", x, &x);
    while (x++ < 33)
    {
	int x = 100;
	x++;
	printf("x in while loop : %3d at %p\n", x, &x);
    }
    printf("x in outer block: %3d at %p\n", x, &x);

    return 0;
}
