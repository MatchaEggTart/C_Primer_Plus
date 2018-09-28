#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int num_spaces = 0;
    int num_lines = 0;
    int num_words = 0;

    while ((ch = getchar()) != '#')
    {
        if (isalpha(ch))
            num_words++;
        if (ch == ' ')
            num_spaces++;
        if (ch == '\n')
            num_lines++;
    }
    printf("\nnumber of spaces is %2d\nnumber of lines is  %2d\n\n"
           "number of words is  %2d\n", num_spaces, num_lines, num_words);

    return 0;
}
