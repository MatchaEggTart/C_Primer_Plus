#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIM 10
#define SIZE 81
char * s_gets(char * st, int n);
void printf_strings(char * st[], int n);
void ascii_sort(char * st[], int n);
void long_sort(char *st[], int n);
void stsrt(char *st [], int n);

int main(void)
{
    char choice, ch;
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int i = 0;
  
    printf("Enter 10 strings or enter EOF to stop\n\n");
    while (i < LIM && s_gets(input[i], SIZE) != NULL
           && input[i][0] != '\0')
    {
        ptstr[i] = input[i];
        i++;
    }
    printf("\n1).printf all strings     2).printf sort for ASCII"
           "\n3).printf sort for long   4).printf sort for head"
           "\nq).quit\n");
    while ((choice = getchar()) != 'q')
    {
        getchar();
        switch (choice)
        {
            case '1': printf_strings(ptstr, i);
                break;
            case '2': ascii_sort(ptstr, i);
                break;
            case '3': long_sort(ptstr, i);
                break;
            case '4': stsrt(ptstr, i);
                break;
            default :printf("%c That's a poor choice.\n", choice);
        }
        printf("\n1).printf all strings     2).printf sort for ASCII"
               "\n3).printf sort for long   4).printf sort for head"
               "\nq).quit\n");
    }
    puts("Done");

    return 0;
}

void printf_strings(char * st[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        fputs(*(st + i), stdout);
}

void ascii_sort(char * st[], int n)
{
    char copy_st[LIM][SIZE];
    int i, j, k;
    char temp;

    printf("printf sort for ASCII:\n\n");
    for (i = 0; i < n; i++)
    {
        strcpy(copy_st[i], st[i]);
    }
    for (i = 0; i < n; i++)
        for (j = 0; copy_st[i][j] != '\0'; j++)
            for (k = 0; k < strlen(copy_st[i]) - 1 - j; k++)
                if (*(*(copy_st + i) + k) > *(*(copy_st + i) + k + 1))
                {
                    temp = *(*(copy_st + i) + k + 1);
                    *(*(copy_st + i) + k + 1) = *(*(copy_st + i) + k);
                    *(*(copy_st + i) + k) = temp;
                }
    for (i = 0; i < n; i++)
        fputs(*(copy_st + i), stdout);
    printf("\n");
}

void long_sort(char *st[], int n)
{
    int i, j;
    char * temp;
    char *strings[n];

    for (i = 0; i < n; i++)
        strings[i] = st[i];
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (strlen(strings[j]) > strlen(strings[j + 1]))
            {
                temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;

                // printf("\n%d\n", i);
                //                fputs(*(strings + i), stdout);
            }
        }   

    for (i = 0; i < n; i++)
        fputs(*(strings + i), stdout);
    printf("\n");

}

void stsrt(char *st [], int n)
{
    int top, seek, i;
    char * temp;
    char *strings[n];

    for (i = 0; i < n; i++)
        strings[i] = st[i];
    
    printf("printf sort for long:\n\n");
    for (top = 0; top < n - 1; top++)
        for (seek = top + 1; seek < n; seek ++)
        {
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }

    for (i = 0; i < n; i++)
        fputs(*(strings + i), stdout);
    printf("\n");

}
