#include <stdio.h>
#include <string.h>
#define STOP "quit"
#define SIZE 81
char * string_reverse(char * str);
char * s_gets(char * st, int n);

int main(void)
{
    char string[SIZE];
    s_gets(string, SIZE);    
    while (strncmp(string, STOP, 4) != 0)
    {
        string_reverse(string);
        puts(string);
        s_gets(string, SIZE);
    }

    puts("Done!");

    return 0;
}

char * string_reverse(char * str)
{
    int i, n;
    char ch;
    n = strlen(str) - 1;

    for (i = 0; i < (n / 2 + 1); i++)
    {
        ch = *(str + i);
        *(str + i) = *(str + n - i);
        *(str + n - i) = ch;
    }

    return str;
}
