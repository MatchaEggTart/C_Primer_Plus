#include <stdio.h>
#define STLEN 14

int main(void)
{
    char words[STLEN];
    int i;

    while (fgets(words, STLEN, stdin) != NULL)
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
        puts(words);
    }

    puts("Done.\n");

    return 0;
}
