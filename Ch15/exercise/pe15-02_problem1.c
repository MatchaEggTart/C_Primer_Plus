#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 8

bool check_bin(const char *st);
void trans(char *st);

int main(int argc, char const *argv[])
{
    char copy_01[SIZE];
    char copy_02[SIZE];
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s binary numeral binary numeral\n"
                        "ex: %s 001 011\n",
                argv[0], argv[0]);
        exit(1);
    }
    if ((!check_bin(argv[1])) || (!check_bin(argv[2])))
    {
        fprintf(stderr, "It should enter 0 or 1\n");
        exit(2);
    }
    if ((strlen(argv[1]) > 8) || (strlen(argv[2]) > 8))
    {
        fprintf(stderr, "We can just recept 8 bits\n");
        exit(3);
    }
    strcpy(copy_01, argv[1]);
    trans(copy_01);
    strcpy(copy_02, argv[2]);
    trans(copy_02);
    putchar('\n');
    for (int i = 0; i < SIZE; i++)
        printf("(%d)%c", i, copy_01[i]);        // (0)(1)0(2)0(3)0(4)0(5)1(6)1(7)1

    // printf("x= %c", copy_01[8]);
    putchar('\n');
    /* code */
    return 0;
}

bool check_bin(const char *st)
{
    while (*st)
    {
        if (*st != '0' && *st != '1')
        {
            // printf("%c ", *st);
            return false;
        }
        st++;
    }
    return true;
}

void trans(char *st)
{
    int count, size_count;
    size_t size_array = strlen(st);
    size_t n = size_array;
    printf("%zd\n", size_array);

    for (count = SIZE - 1; count >= (SIZE - size_array); count--)
    {
        *(st + count) = *(st + n - 1);
        n--;
    }
    printf("count = %d\n", count);
    for (; count >= 0; count--)
        st[count] = '0';
    // printf("count = %d, copy[0] = %c\n", count, st[0]);
    for (int i = 0; i < SIZE; i++)
        printf("(%d)%c", i, st[i]);
    st[0] = 0;
    st[SIZE] = '\0';
}

// for (int count = 0; count < SIZE; count++)
// printf("%c ", argv[1][count]);
// printf("%zd\n", sizeof(argv[1]));