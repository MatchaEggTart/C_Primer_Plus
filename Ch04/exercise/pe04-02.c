#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(void)
{
    char firstname[SIZE];
    char lastname[SIZE];
    int i;
    int n;
    
    printf("Enter Your Firstname, please: ");
    printf(" $________\b\b\b\b\b\b\b\b");
    scanf("%s", firstname);
    printf("Enter Your Lastname, please: ");
    printf(" $________\b\b\b\b\b\b\b\b");
    scanf("%s", lastname);
    printf("a.\n\"%s %s\"\n",lastname,firstname);
    i = 20 - strlen(firstname) - 3;
    printf("%d\n", i);
    printf("b.\n\"%*s %s\"\n", i, lastname, firstname);
    printf("c.\n\"%s %*s", lastname, -i, firstname);
    printf("\"\n");
    i = strlen(firstname) + 3;
    printf("d.\n%*s %s\n", i, firstname, lastname);

    return 0;
}
