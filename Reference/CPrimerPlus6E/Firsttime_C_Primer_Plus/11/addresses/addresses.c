#define MSG "I'm special"
#include <stdio.h>
int main(void)
{
    char ar[]=MSG;
    const char *pt=MSG;
    printf("\naddress of \"I'm special\": %p \n\n","I'm special");
    printf("                address ar : %p\n",ar);
    printf("                address pt : %p\n",pt);
    printf("            address of MSG : %p\n",MSG);
    printf("address of \"I'm special\" : %p \n","I'm special");
    printf("               address &pt : %p\n",&pt);
    return 0;
}
