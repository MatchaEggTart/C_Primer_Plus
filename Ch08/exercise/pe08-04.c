#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch, num;
    bool is_word = true;

    num = 0;
    while ((ch = getchar()) != EOF)
    {
        if (!ispunct(ch))
        {
            if (ch != ' ' && is_word == true)
            {
                is_word = false;
                num++;
            }
            if (ch == ' ' || ch == '\n')
                is_word = true;
        } else if (ch != '\'')
            is_word = true;
    }
    printf("There's %d words!\n", num);

    return 0;
}
