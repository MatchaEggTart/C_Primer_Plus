#include <stdio.h>
int main(void)
{
    int guess = 50, big = 100, small = 1;
    int ch, n;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan b if it is bigger and s if it is smaller.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((ch = getchar()) != 'y')
    {
        if (ch == 'b')
        {
            small = guess;
        }
        else if (ch == 's')
        {
            big = guess;
        }
        else
            continue;
        guess = (small + big) / 2;

        printf("Uh...is your number %d?\n", guess);

    }
            
            
    printf("I knew I could do it!\n");

    return 0;
}
