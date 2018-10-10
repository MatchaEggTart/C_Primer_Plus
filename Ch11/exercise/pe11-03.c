/* Programming Exercise 11-3 */
#include <stdio.h>
#include <string.h>
#define LEN 80
#define STOP "quit"
char * getword(char * str);
int main(void)
{
    char input[LEN];
    
    while (getword(input) != NULL && strncmp(input, STOP, 4))
        puts(input);
    puts("Done.\n");
    return 0;
}
#include <ctype.h>

char * getword(char * str)
{
    int i, j;
    char * orig = str;
    
    fgets(str, LEN, stdin);
    for (i = 0; isspace(*(str + i)); i++);
    if (isspace(*(str + i + 1)))
        for (; !isspace(*(str + i)); i++);
    for (j = i; !isspace(*(str + j)); j++)
    {
        *(str + j - i) = *(str + j);
    }
    *(str + j - i) = '\0';

    return orig;
}
