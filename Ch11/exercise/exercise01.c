#include <stdio.h>
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

    fgets(ch, n, stdin);
    fputs(ch, stdout);
    pt = ch;
    printf("\npt = %p\n", pt);
    return pt;
}
