#include <stdio.h>
#include <stddef.h>     // use offsetof()
#include <stdbool.h>

struct test1 {
    int a;
    char b;
};

struct stuff {          //p.442
    double cost;
    int number;
    char code[3];
};

int main(void)
{
    int t;
    printf("\nsizeof test1  is %zd\n", sizeof(struct test1));

    t = offsetof(struct test1, a);
    printf("sizeof int a    is %d\n", t);
    t = offsetof(struct test1, b);
    printf("sizeof char b   is %d\n\n", t);
    
    printf("sizeof stuff    is %d\n", sizeof(struct stuff));
    t= offsetof(struct stuff, cost);
    printf("sizeof cost     is %d\n", offsetof(struct stuff, cost));
    t= offsetof(struct stuff, number);
    printf("sizeof number   is %d\n", offsetof(struct stuff, number));
    t= offsetof(struct stuff, code);
    printf("sizeof code     is %d\n\n", offsetof(struct stuff, code));
   
    return 0;
}

/*

sizeof test1  is 8
sizeof int a    is 0
sizeof char b   is 4
sizeof stuff    is 12

sizeof number   is 0
sizeof code     is 4
sizeof cost     is 8

*/