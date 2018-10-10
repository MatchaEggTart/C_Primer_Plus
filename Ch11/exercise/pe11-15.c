#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdbool.h>

#define LIM 30
char * s_gets(char *st, int n);
int pick_dig(char *c, int n);

int main(void)
{
    char number[LIM];
    char * end;
    long value;

    puts("Enter a number (empty line to quit):");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        if (pick_dig(number, LIM) == 1)
            printf("%s is a digits\n", number);
        else
            printf("%s is not a digits\n", number);
            
    }
    puts("Bye!\n");

    return 0;
}

int pick_dig(char *c, int n)
{
    int i;
    bool digg = true;
    for (i = 0; c[i] != '\n'; i++)
    {
        if (!isdigit(*(c + i))) 
            digg = false;
        
    }
    if (digg)
        return 1;
    else
        return 0;
}
