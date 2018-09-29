#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";

    puts("What is your favorite flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");
    puts("bye");

    return 0;
}
