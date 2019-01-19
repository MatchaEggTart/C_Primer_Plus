#include <stdio.h>
#include <math.h>
#define SIZE 100
double change_a(double source);
double change_b(double source);
double * transform(double * source, double * target, int num, double(*fp)(double));

const double pi = acos(-1.0);
int main(void)
{
    
    double source[SIZE];
    double target[SIZE];
    int count;
    double a = 1;
    a = a * pi / 180;
    printf("%lf\n", sin(a));
    a = 0.0;
    for (count = 0; count < SIZE; count++)
    {
        source[count] = a++;
    }
    double (*pfun)(double);
    pfun = change_a;
    transform(source, target, SIZE, sin);

    puts("source  target");
    for (count = 0; count < SIZE; count++)
    {
        printf("%7.4lf %7.4lf\n", source[count], target[count]);
    }

    return 0;
}


double * transform(double * source, double * target, int num, double(*fp)(double))
{
    int count;
    for (count = 0; count < num; count++)
    {
        target[count] = fp(source[count] * pi / 180);
    }

    return target;
}

/*
double change_a(double source)
{
    double value;
    int count;
         value = source + 1;
    return value;
}

double change_b(double source)
{
    double value;
    int count;
         value = source / 2;
    return value;
}
*/
