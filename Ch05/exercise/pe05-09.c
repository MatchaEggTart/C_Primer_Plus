#include <stdio.h>
void Temperatures(double n);

int main(void)
{
    double fahrenheit;
    
    printf("Input the fahrenheit: _____F\b\b\b\b\b\b");
    while (scanf("%lf", &fahrenheit) == 1) {
        Temperatures(fahrenheit);
        printf("Input the fahrenheit: _____F\b\b\b\b\b\b");
    }
    printf("Bye\n");

    return 0;
}

void Temperatures(double n)
{
    const double centi_a = (5.0 / 9.0);
    const double centi_b = 32.0;
    const double kelvin_a = 273.16;
    double centigrade, kelvins;

    centigrade = centi_a * (n - centi_b);
    kelvins = centigrade + kelvin_a;
    printf("Fahrenheit : z%.5E F\nCentigrade : %.5E C\n"
           "Kelvins    : %.5E K\n\n", n, centigrade,
           kelvins);
}
