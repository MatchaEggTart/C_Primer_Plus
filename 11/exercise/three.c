#include <stdio.h>
#include <ctype.h>
#define LEN 80
int main(void)
{
    char st[LEN];
    int i;
    
    fgets(st, LEN, stdin);
    for (i = 0; i < LEN; i++)
        if (isblank(st[i]))
            st[i] = '\0';
    fputs(st, stdout);
    puts("\n");

    return 0;
}
