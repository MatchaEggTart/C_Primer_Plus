#include <stdio.h>
#define SIZE 20

int main(void)
{
    char firstname[SIZE];
    char lastname[SIZE];

    printf("Enter Your Firstname, please: ");
    printf(" $________\b\b\b\b\b\b\b\b");
    scanf("%s", &firstname);
    printf("Enter Your Lastname, please: ");
    printf(" $________\b\b\b\b\b\b\b\b");
    scanf("%s", &lastname);
    printf("Release it \n%s %s\n", lastname, firstname);

    return 0;
}
