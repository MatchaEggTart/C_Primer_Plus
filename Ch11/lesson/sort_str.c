#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HELT ""
void stsrt(char *strings [], int num);
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL
           && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    stsrt(ptstr, ct);
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);

    return 0;
}

void stsrt(char *strings[], int num)
{
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}