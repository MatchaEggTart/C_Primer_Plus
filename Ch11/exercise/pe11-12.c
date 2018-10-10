#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char c;
    // read in character
    int low_ct = 0;
    // number of lowercase characters
    int up_ct = 0;
    // number of uppercase characters
    int dig_ct = 0;
    // number of digits
    int n_words = 0;
    // number of words
    int punc_ct = 0;
    // number of punctuation marks
    bool isword = false;

    printf("Enter text to be analyzed (EOF to terminate):\n");
    while ((c = getchar()) != EOF)
    {
        if (islower(c))
            up_ct++;
        else if (isupper(c))
            low_ct++;
        else if (isdigit(c))
            dig_ct++;
        else if (ispunct(c))
            punc_ct++;
        if (!isword && !isspace(c))
            isword = true;
        if (isword && isspace(c))
        {
            isword = false;
            n_words++;
        }
    }
    printf("\nwords = %d, lowercase = %d, uppercase = %d, "
           "digits = %d, punctuation = %d\n",
           n_words,low_ct,up_ct, dig_ct, punc_ct);
    return 0;
}
