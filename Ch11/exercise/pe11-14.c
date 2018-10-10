#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[])
{
    double base, exponent;

    if (argc > 3)
        printf("That's wrong");
    else
    {
        base = atof(argv[1]);
        exponent = atof(argv[2]);
        printf("%.2lf to the power of minus %.2lf is %.2lf\n",
               base, exponent, pow(base, exponent));
    }

    return 0;
}
