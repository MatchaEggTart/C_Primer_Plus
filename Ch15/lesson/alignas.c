#include <stdio.h>

int main(void)
{
    int a1;
    int a2;
    int _Alignas(double) a3;

    printf("&a1: %p\n", &a1);
    printf("&a2: %p\n", &a2);
    printf("&a3: %p\n", &a3);

    double b1;
    double b2;
    char _Alignas(double) b3;

    putchar('\n');
    printf("&b1: %p\n", &b1);
    printf("&b2: %p\n", &b2);
    printf("&b3: %p\n", &b3);

    char c1;
    char c2;
    char _Alignas(double) c3;

    putchar('\n');
    printf("&c1: %p\n", &c1);
    printf("&c2: %p\n", &c2);
    printf("&c3: %p\n", &c3);

    printf("Important\n\n");
    double d0;
    char _Alignas(double) d1;
    char d2;
    double d3;
    char d4;
    char _Alignas(double) d5;
    char d6;
    double d7;

    printf("&d0: %p\n", &d0);
    printf("&d1: %p\n", &d1);
    printf("&d2: %p\n", &d2);
    printf("&d3: %p\n", &d3);
    printf("&d4: %p\n", &d4);
    printf("&d5: %p\n", &d5);
    printf("&d6: %p\n", &d6);
    printf("&d7: %p\n", &d7);

    return 0;
}