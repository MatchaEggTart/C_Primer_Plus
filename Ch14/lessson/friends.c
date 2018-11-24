#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {			//a struct name 'guy' use 84 bytes
    struct names handle;	//40 bytes
    char favfood[LEN];		//20 bytes
    char job[LEN];		//20 bytes
    float income;		//4 bytes
};

int main(void)
{
    struct guy fellow[2] = {
            {
                { "Ewen", "Villard" },
                "grilled salmon",
                "personality coach",
                68112.00
            },
            {
                { "Rodney", "Swillbelly" },
                "tripe",
                "tabloid editor",
                432400.00
            }
    };
    struct guy * him;	//pointer the struct

    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    //84(10) = 54(16)
    him = &fellow[0];
    printf("address #1: %p #2: %p\n", him, him + 1);
    printf("him -> income is $%.2f: (*him).income is $%.2f\n",
           him->income, (*him).income);
    // (*(him + 1).income) no work
    him++;
    //him = &fellow[1]
    printf("him -> favfood is %s: him -> handle.last is %s\n",
           him->favfood, him->handle.last);

    return 0;
}
