#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds *);

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8543.94
    };
    struct funds * point;
    point = &stan;
    printf("Stan has a total of $%.2f\n",
           sum(point));

    return 0;
}

double sum(struct funds * money)
{
    return (money->bankfund + money->savefund);
}
