#include <stdio.h>
#include <string.h>
#define STOP "quit"
#define SIZE 10
char * s_gets(char * st, int n);
char * mystrncpy(char * s1, char * s2, int n);

int main(void)
{
    char string1[SIZE];
    char string2[SIZE];
    int n;

    printf("Enter 'quit' on both string can stop the program!\n");
    printf("The first string:\n");
    s_gets(string1, SIZE);
    printf("The second string:\n");
    s_gets(string2, SIZE);
    printf("How long you want to cut?\n");
    scanf("%d", &n);
    getchar();                                                                  
    while (strncmp(string1, STOP, 4) && (strncmp(string2, STOP, 4)))
    {
        mystrncpy(string1, string2, n);
        puts(string1);
        printf("Enter 'quit' on both string can stop the program!\n");
        printf("The first string:\n");
        s_gets(string1, SIZE);
        printf("The second string:\n");
        s_gets(string2, SIZE);
        printf("How long you want to cut?\n");
        scanf("%d", &n);
        getchar();                                                                  
    }
    puts("Done");

    return 0;
}

char * mystrncpy(char * s1, char * s2, int n)
{
    int i, j;

    if (strlen(s1) + n > SIZE)
        return NULL;
    else
    {
        for (i = 0; *(s1 + i) != '\0'; i++);
        *(s1 + (i - 1)) = ' ';
        for (j = 0; j < n; j++)
        {
            *(s1 + i + j) = *(s2 + j); 
        }
        *(s1 + i + j) = '\0';

        return s1;
    }
}
