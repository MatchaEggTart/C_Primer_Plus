#include <stdio.h>
#define LEN 20

char * msgs[5] =
{
    " is ugly",
    " is so poor",
    " so mean",
    "He love ",
    " so much"
};

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favgirl[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy axel = {
        { "JingLan", "Zheng" },
        "Americal Gril",
        "No job",
        0.0
    };

    printf("%s%s\n", axel.handle.first, msgs[0]);
    printf("%s%s%s\n", msgs[3], axel.favgirl, msgs[4]);
    printf("And he has %s and earn $%.2f\n", axel.job, axel.income);
    printf("%s%sand%s\n", axel.handle.first, msgs[1], msgs[2]);
    printf("So I think %s %s is a sad man\n", axel.handle.last, axel.handle.first);

    return 0;
}
