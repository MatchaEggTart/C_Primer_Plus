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

    printf("\nImportant\n\n");

    double x0;				        //d8
    char _Alignas(double) x1;		//d0
    char x2;				        //cf
    double x3;				        //c0
    char x4;				        //bf
    char _Alignas(double) x5;		//b8
    char x6;				        //b7
    char x7;				        //a8
    double x8;

    printf("x0: %p\n", &x0);
    printf("x1: %p\n", &x1);
    printf("x2: %p\n", &x2);
    printf("x3: %p\n", &x3);
    printf("x4: %p\n", &x4);
    printf("x5: %p\n", &x5);
    printf("x6: %p\n", &x6);
    printf("x7: %p\n", &x7);
    printf("x8: %p\n", &x8);

    printf("x5 = %zd\n", sizeof(x5));
    printf("x8 = %zd\n", sizeof(x8));

    return 0;
}