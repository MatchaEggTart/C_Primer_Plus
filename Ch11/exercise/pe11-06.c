#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
#define STOP "quit"
int is_within(char * x, char y);

int main(void)
{
    char x[LEN];
    char y;
    int i;
    char * pointer;

    printf("What's the string:\n");
    fgets(x, LEN, stdin);
    printf("What's the charater:\n");
    scanf("%c", &y);
    getchar();
        
    while (strcmp(x, STOP) != 0)
    {
        printf("%d\n",strcmp(x, STOP));
        i = is_within(x, y);
        if (i != 0)
            printf("In the %d char, the first %c\n", i, y);
        else
            printf("the string has no %c\n", y);
        printf("What's the string:\n");
        fgets(x, LEN, stdin);
        printf("What's the charater:\n");
        scanf("%c", &y);
        getchar();
    }
    
    return 0;
}

int is_within(char * x, char y)
{
    int i;
    

    for (i = 0; i < LEN; i++)
        if (y == *(x + i))
        {
            return (i + 1);
        }
    return 0;
}
