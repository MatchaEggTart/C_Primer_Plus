#include <stdio.h>
#include <ctype.h>
char * save(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    char *string;
    string = save(n);
    printf("\nst = %p\n", string);
    puts("\n");

    return 0;
}

char * save(int n)
{
    
    char ch[n];
    char *pt;
    int i;
    
    fgets(ch, n, stdin);
    pt = ch;
    for (i = 0; i < n; i++)
        if (isblank(ch[i]))
            ch[i] = '\0';
    fputs(ch, stdout);
    printf("\npt = %p\n", pt);

    return pt;
}

