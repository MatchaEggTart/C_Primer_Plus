#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int btois(char const *);
char * itobs(int, char *);
bool check_bin(char const *);

int main(int argc, char const * argv[])
{
    int argument_1, argument_2;

    char bin_str[CHAR_BIT * sizeof(int) + 1];

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s binary binary\nex:%s 100 010\n", argv[0], argv[0]);
        exit(EXIT_FAILURE);
    }

    if (!check_bin(argv[1]) && !check_bin(argv[2]))
    {
        fprintf(stderr, "Twos arguments must be binary. ex: 10101\n");
        exit(2);
    }

    argument_1 = btois(argv[1]);
    argument_2 = btois(argv[2]);

    printf("   %32s\n&   %31s\n", argv[1], argv[2]);
    printf("   %s\n\n", itobs((argument_1 & argument_2), bin_str));
    printf("   %32s\n|   %31s\n", argv[1], argv[2]);
    printf("   %s\n\n", itobs((argument_1 | argument_2), bin_str));
    printf("   %32s\n^   %31s\n", argv[1], argv[2]);
    printf("   %s\n\n", itobs((argument_1 ^ argument_2), bin_str));
    printf("\n\n");
    printf("   %32s\n~= %s\n", argv[1], itobs(~argument_1, bin_str));
    printf("   %32s\n~= %s\n", argv[2], itobs(~argument_2, bin_str));

    return 0;
}


int btois(char const * str)
{
    int val = 0;
    int i = 0;

    while (str[i])
        val = val * 2 + (str[i++] - '0');
    // printf("%d) %d\n", i, val);

    return val;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';

    ps[size] = '\0';

    return ps;
}

bool check_bin(char const * ps)
{
    int i = 0;
    bool result = true;
    
    while (ps[i]) 
    {
        if (ps[i] != '0' && ps[i] != '1')
        {
            result = false;
            break;
        }
        i++;
    }

    return result;
}
