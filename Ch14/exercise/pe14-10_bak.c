#include <stdio.h>
#include <math.h>

double twice(double x);
double half(double x);
double thrice(double x);
void showmenu(void);
#define NUM 3
int main(void)
{
    double (*pf[NUM])(double) = {twice, half, thrice};
    double val;
    double ans;
    int sel;
    printf("Enter a number (negative to quit): ");
    while (scanf("%lf", &val) && val >= 0)
    {
        showmenu();
        while (scanf("%d", &sel) && sel >= 0 && sel <= 2)
        {
            ans = (*pf[sel])(val);
            // first notation
            printf("answer = %f\n", ans);
            ans = pf[sel](val);
            // alternative notation
            printf("to repeat, answer = %f\n", ans);
            showmenu();
        }
        printf("Enter next number (negative to quit): ");
    }
    puts("bye");
    return 0;
}
void showmenu(void)
{
    puts("Enter one of the following choices:\n");
    puts("0) double the value\n1) halve the value\n");
    puts("2) triple the value\n");
    puts("3) next number");
}
double twice(double x) {return 2.0 * x;}
double half(double x) {return x / 2.0;}
double thrice(double x) {return 3.0 * x;}
