#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 8

bool check_bin(const char *st);
void trans(char *st);

int main(int argc, char const *argv[])
{
    char copy_01[SIZE] = { '0', '0', '0', '0', '0', '0', '0', '0' };
    char copy_02[SIZE] = { '0', '0', '0', '0', '0', '0', '0', '0' };
    size_t lenght_01 = strlen(argv[1]);
    size_t lenght_02 = strlen(argv[2]);
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
    if (lenght_01 > SIZE || lenght_02 > SIZE)
    {
        fprintf(stderr, "We can just recept 8 bits\n");
        exit(3);
    }
    strcpy(copy_01 + (SIZE - lenght_01), argv[1]);
        strcpy(copy_02 + (SIZE - lenght_01), argv[2]);

     puts(copy_01);
   
        puts(copy_02);
    trans(copy_01);

    trans(copy_02);
     puts(copy_01);
             puts(copy_02);

    putchar('\n');
  
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
    printf("\n%zd\n", size_array);

    for (count = SIZE - 1; count >= (SIZE - size_array); count--)
    {
        *(st + count) = *(st + n - 1);
               puts(st);

        n--;
    }
    printf("count = %d\n", count);
    for (; count >= 0; count--)
    {
         
        st[count] = '0';
        puts(st);
    }
   
st[SIZE - 2] = '\0';
}

// for (int count = 0; count < SIZE; count++)
// printf("%c ", argv[1][count]);
// printf("%zd\n", sizeof(argv[1]));


  // for (int i = 0; i < SIZE; i++)
    //     printf("(%d)%c", i, copy_01[i]);        // (0)(1)0(2)0(3)0(4)0(5)1(6)1(7)1
    // printf("x= %c", copy_01[8]);

    // printf("count = %d, copy[0] = %c\n", count, st[0]);
    // for (int i = 0; i < SIZE; i++)
        // printf("(%d)%c", i, st[i]);

                    // printf("%c ", *st);
