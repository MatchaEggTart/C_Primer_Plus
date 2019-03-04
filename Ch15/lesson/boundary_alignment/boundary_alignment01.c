#include <stdio.h>

int main(void)
{
    struct {
        unsigned int code1 : 2;
        unsigned int code2 : 2;
        unsigned int code3 : 8;
    } prcode;

    prcode.code1 = 0;
    prcode.code2 = 3;
    prcode.code3 = 102;

    printf("sizeof prcode is %zd\n", sizeof(prcode));

    struct {
        unsigned int field1 : 1;
        unsigned int        : 2;
        unsigned int field2 : 1;
        unsigned int        : 0;
        unsigned int field3 : 1;
    } stuff1;
    
    printf("sizeof stuff is %zd\n", sizeof(stuff1));

    struct {
        unsigned int field1 : 1;
        unsigned int        : 2;
        unsigned int field2 : 1;
        unsigned int field3 : 1;
    } stuff2;

    printf("sizeof stuff is %zd\n", sizeof(stuff2));

    printf("sizeof int is %zd\n", sizeof(int));

    return 0;
}