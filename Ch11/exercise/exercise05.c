#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
#define STOP "quit"
char * find(char * x, char y);

int main(void)
{
    char x[LEN];
    char y = 'i';
    char * pointer;

    pointer = find(x, y);
    while (strncmp(x, STOP, 4) != 0)
    {
        if (pointer)
            printf("In the %td char, the first %c\n", pointer - x + 1, y);
        else
            printf("the string has no %c\n", y);
        pointer = find(x, y);
    }
    
    return 0;
}

char * find(char * x, char y)
{
    char * address;
    int i;
    
    fgets(x, LEN, stdin);
    for (i = 0; i < LEN; i++)
        if (y == *(x + i))
        {
            address = (x + i);
            return address;
        }
    return NULL;
}
