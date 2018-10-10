#include <stdio.h>
int main(void)
{
    int age;
    
    printf("\nHello!\nInput you age, please!\n");
    scanf("%d",&age);
    printf("So, you live is %d days\n", age * 365);

    return 0;
}
