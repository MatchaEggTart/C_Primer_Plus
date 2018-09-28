#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int num_words = 0;

    while ((ch = getchar()) != '#')
    {
        
        printf("%c-%3d ", ch, ch);
        num_words++;
        if (num_words == 8)	//don't miss '=', Don't make Assignment! It should be judgment! (num_words = 8)
        {
            printf("\n");
            num_words = 0;
            }
    }
    printf("\n");

    return 0;
}
