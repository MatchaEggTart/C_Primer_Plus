#include <stdio.h>

int main(void)
{
    struct {
        unsigned int autfd : 1;
        unsigned int bldfc : 1;
        unsigned int undln : 1;
        unsigned int itals : 1;
    } prnt;

    prnt.itals = 1;
    printf("prnt->autfd = %d\n", prnt.autfd);
    printf("prnt->bldfc = %d\n", prnt.bldfc);
    printf("prnt->undln = %d\n", prnt.undln);
    printf("prnt->itals = %d\n", prnt.itals);

    prnt.autfd = 3;
    printf("prnt->autfd = %d\n", prnt.autfd);
    printf("prnt->bldfc = %d\n", prnt.bldfc);
    printf("prnt->undln = %d\n", prnt.undln);
    printf("prnt->itals = %d\n", prnt.itals);

    return 0;
}