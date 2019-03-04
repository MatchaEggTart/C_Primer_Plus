#include <stdio.h>

int main(void)
{
    double dx;
    //char co;
    char ca;
    char cx;
    double dz;
    char cb;
    char _Alignas(8) cz;

    printf("char alignment:     %zd\n", _Alignof(char));
    printf("double alignment:   %zd\n", _Alignof(double));
    printf("&dx: %p\n", &dx);
    printf("&ca: %p\n", &ca);
  //  printf("&co: %p\n", &co);
    printf("&cx: %p\n", &cx);
    printf("&dz: %p\n", &dz);
    printf("&cb: %p\n", &cb);
    printf("&cz: %p\n", &cz);

    printf("sizeof dx is %zd\n", sizeof(dx));
    printf("sizeof ca is %zd\n", sizeof(ca));
    printf("sizeof cx is %zd\n", sizeof(cx));
    printf("sizeof dz is %zd\n", sizeof(dz));
    printf("sizeof cz is %zd\n", sizeof(cz));

    double x1;
    double x2;
    int x3;

    printf("&x1: %p\n", &x1);
    printf("&x2: %p\n", &x2);
    printf("&x3: %p\n", &x3);
    printf("sizeof x1 is %zd\n", sizeof(x1));
    printf("sizeof x2 is %zd\n", sizeof(x2));
    printf("sizeof x3 is %zd\n", sizeof(x3));

    double z1;
    char _Alignas(double) z2;
    int z3;

    printf("&z1: %p\n", &z1);
    printf("&z2: %p\n", &z2);
    printf("&z3: %p\n", &z3);
    printf("sizeof z1 is %zd\n", sizeof(z1));
    printf("sizeof z2 is %zd\n", sizeof(z2));
    printf("sizeof z3 is %zd\n", sizeof(z3));

    return 0;
}