#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    char st[n];

    fgets(st, n, stdin);

    fputs(st, stdout);
    puts("\n");

    return 0;
}
