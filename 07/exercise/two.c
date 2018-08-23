#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int num_words = 0;

    while ((ch = getchar()) != '#')
    {
        num_words++;
        printf("%c-%3d ", ch, ch);
         if (num_words % 8  == 0)
           printf("\n");
    }
    printf("\n");

    return 0;
}
