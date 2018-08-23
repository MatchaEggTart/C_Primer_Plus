#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];
    char *p;
    puts("Enter a string, please.");
    fgets(words,STLEN,stdin);
    p="Your string twice ( puts() ,then fputs() ):";
    puts(p);
    puts(words);
    fputs(words, stdout);
    puts("Enter another string,please.");
    fgets(words,STLEN,stdin);
    puts(p);
    puts(words);
    fputs(words,stdout);
    puts("Done.");
    return 0;
}
