#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 81
#define SPACE ' '
#define STOP '\n'
void delete_space(char * st);
char * s_gets(char * st, int n);

int main(void)
{
    char string[SIZE];

    while (s_gets(string, SIZE) != NULL && string[0] != '\n')
    {
        delete_space(string);
        puts(string);
    }

    puts("Done!");

    return 0;
}

void delete_space(char * st)
{
    int i, j;
    int n = strlen(st);
    for (i = 0; *(st + i) != '\0'; i++)
    {
        if (*(st + i) == SPACE)
        {
            for (j = i; *(st + j) != '\0'; j++)
                *(st + j) = *(st + j + 1);
        }
    }

    return ;
}
