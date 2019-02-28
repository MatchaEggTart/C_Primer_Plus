#include <stdio.h>

int main(void)
{
    union hold {
        int digit;
        double bigfl;
        char letter;
    };

    union hold fit;

    fit.digit = 23;
    fit.bigfl = 2.0;
    fit.letter = 'h';

    printf("digit = %d\nbigfl = %lf\nletter = %c\n", 
    fit.digit, fit.bigfl, fit.letter);
    printf("sizeof hit is %zd\n", sizeof(fit));
    printf("sizeof double is %zd\n", sizeof(double));

    return 0;
}