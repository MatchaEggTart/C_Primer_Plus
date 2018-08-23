#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
    const char *orig=WORDS;
    char copy[SIZE]="Be thebest that you can be.";
    char *ps;
    puts(orig);
    puts(copy);
    ps=strcpy(copy,orig);
    printf("strcpy(copy+7,orig) = %p\ncopy = %p\n",strcpy(copy+7,orig),copy);
    puts(copy);
    puts(ps);
    return 0;
}
