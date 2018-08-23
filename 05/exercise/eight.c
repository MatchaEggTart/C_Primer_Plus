#include <stdio.h>

int main(void)
{
    int num, sum;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the "
           "second operand: ");
    scanf("%d", &num);
    printf("Now enter the first operand: ");
    scanf("%d", &sum);
    while (sum > 0) {
        printf("%d %% %d is %d\n", sum, num, sum % num);
        printf("Enter next number fo first operand (<= 0 to "
               "quit): ");
        scanf("%d", &sum);
    }
    printf("Done\n");

    return 0;
}
