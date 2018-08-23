#include <stdio.h>
//这次不需要string.h,因为sprintf()函数声明在stdio.h中
#define MAX 20
char *s_gets(char *,int);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2*MAX+10];
    double prize;

    puts("Enter your first name:");
    s_gets(first,MAX);
    puts("Enter your last name:");
    s_gets(last,MAX);
    puts("Enter your prize money:");
    scanf("%lf",&prize);
    sprintf(formal,"%s, %-19s: $%6.2f\n",last,first,prize);
    puts(formal);
    return 0;
}
