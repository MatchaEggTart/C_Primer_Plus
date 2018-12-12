#include <stdio.h>
#include <string.h>

union hold {
    int digit;
    //    double bigfl;
    char letter;
};
    
int main(void)
{
    union hold fit;
    scanf("%d", &fit.digit);

    printf("%zd\n", sizeof(fit));

    return 0;
}
