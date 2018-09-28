#include <stdio.h>
int main(void)
{
    float cup;
    
    scanf("%f", &cup);
    printf("  %.2f cup \n= %.2f pint \n= %.2f ounce \n= %.2f tablespoon \n= %.2f teaspoon\n", cup, cup / 2,
           cup * 8, cup * 8 / 2, cup * 8 / 2 * 3);

    return 0;
}
