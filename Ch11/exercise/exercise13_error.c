#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 81
char * s_gets(char * st, int n);
void * reverse_order(char * st, int n);
int word_long(char *st, int n);

int main(void)
{
    char ch[SIZE];
    char *st;
    int i = 0;

    s_gets(ch, SIZE);
    reverse_order(ch, SIZE);
    printf("%d\n", word_long(ch, SIZE));
    return 0;
}

void * reverse_order(char * st, int n)
{
    char * pointer;
    char copy[n];
    int i, j, k;
    pointer = st;
    for (i = 0; *(st + i) != '\0'; i++)
        copy[i] = st[i];
    int size = strlen(copy);

    
    for (i = 0; i < word_long(st[i], size), i++)
    {
        copy[size - 2 - i] = st[i];
    }
    


}

int word_long(char * st, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (st[i] == '\n' || isspace(st[i]))
            return i;
    }
}
