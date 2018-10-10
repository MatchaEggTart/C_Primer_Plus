#include <stdio.h>
#include <string.h>
#define SIZE 81
char * string_in(char * st1, char * st2);
char * s_gets(char * st, int n);

int main(void)
{
    char  string1[SIZE];
    char  string2[SIZE];
    s_gets(string1, SIZE);
    s_gets(string2, SIZE);
    printf("%p\n", string1);
    while (string_in(string1, string2))
    {
        printf("%p\n", string1);
        s_gets(string1, SIZE);
        s_gets(string2, SIZE);

    }        

    puts("Done");

    return 0;
}

char * string_in(char * st1, char * st2)
{
    int n = strlen(st2) - 1;
    int i;

    for(i = 0; *st1 != '\0'; i++)
    {
        if (strncmp(st1, st2, n) == 0)
        {
            printf("%d\n", i + 1);
            return st1;
        }
        st1 = st1 + 1;
    }

    return NULL;
}
