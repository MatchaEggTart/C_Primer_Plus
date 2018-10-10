#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int i = 0, sum = 0;
    char ch;
        
    for (i=0; ((ch=getchar()) != EOF); i++)
    {
        if (ch == '\'');
        else if (ispunct(ch) || (ch == ' ') || ch == '\n')
        {
            sum++;
            i--;
        }

    }
    printf("characters: %d\nwords: %d\n", sum, i / sum);
        
    return 0;
}
