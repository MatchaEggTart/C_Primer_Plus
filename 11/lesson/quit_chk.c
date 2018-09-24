#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM  10
#define STOP "quit"
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL &&
           strcmp(input[ct], STOP) != 0)
    {
        ct++;
    }
}
