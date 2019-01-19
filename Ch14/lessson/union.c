#include <stdio.h>
#include <string.h>

union hold {
    int digit;
    double bigfl;
    char letter;
};
    
int main(void)
{
    union hold fit;
    
    scanf("%d", &fit.digit);
    fit.bigfl = 2.0;
    fit.letter = 'c';
    
    printf("%lf\n", fit.bigfl);
    printf("%d\n", fit.digit);
    printf("%zd\n", sizeof(fit));
    return 0;
}
