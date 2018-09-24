/* Programming Exercise 11-4 */
#include <stdio.h>
#include <string.h>
#define STOP "quit"
#define LEN 80
char * getword(char * str, int n);
char * s_gets(char * str, int n);
int main(void)
{
    char input[LEN];
    
    while (getword(input, LEN) != NULL && strcmp(input, STOP) != 0)
        puts(input);
    puts("Done.\n");
    return 0;
}
#include <ctype.h>

char * getword(char * str, int n)
{
    int i, j;
    char * orig = str;
    
    s_gets(str, n);
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
