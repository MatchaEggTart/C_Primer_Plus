#include <stdio.h>
float cal(float a, float b);

int main(void)
{
    float a, b;

    printf("Input two numbers: ");
    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("%.5f\n", cal(a, b));
            printf("Input two numbers: ");
    }
    printf("That's done!\n");

    return 0;
}

float cal(float a, float b)
{
    float o;

    o = (a - b) / (a * b);

    return o;
}
