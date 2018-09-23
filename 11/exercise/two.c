#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    char st[n];
    int i;
    
    fgets(st, n, stdin);
    for (i = 0; i < n; i++)
        if (isblank(st[i]))
            st[i] = '\0';
    fputs(st, stdout);
    puts("\n");

    return 0;
}
