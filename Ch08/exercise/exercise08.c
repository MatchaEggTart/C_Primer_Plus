#include <stdio.h>
char start(void);
void add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);

int main(void)
{
    char ch;
    float a, b;

    while ((ch = start()) != 'q')
    {
        if (ch == 'a' || ch == 's' || ch == 'm' || ch == 'd')
        {
            printf("Enter first number: ");
            while ((scanf("%f", &a)) != 1)
            {
                char ch = 0;
                while ((ch = getchar()) != '\n')
                    putchar(ch);
                printf(" is not an number\n");
                printf("Please enter a number, such a"
                       "s 2.5, -1.78E8, or 3: ");
            }
            getchar();//important
            printf("Enter second number: ");
            while ((scanf("%f", &b)) != 1) //if b isnot number , run next
            {
                char ch = 0;
                while ((ch = getchar()) != '\n')
                    putchar(ch);
                printf(" is not an number\n");
                printf("Please enter a number, such a"
                       "s 2.5, -1.78E8, or 3: ");
            }
            getchar();//important
            switch (ch)
            {
                case 'a':
                    add(a, b);
                    break;
                case 's':
                    sub(a, b);
                    break;
                case 'm':
                    mul(a, b);
                    break;
                case 'd':
                    if (b == 0.0)
                    {
                        printf("Enter a number other than 0:");
                        scanf("%f", &b);
                    }
                    div(a, b);
                    break;
                default:
                    break;
            }
        }else
            continue;
    }
    printf("Bye.\n");

    return 0;
}

char start(void)
{
    char ch;
    printf("Enter the opeartion of your choice:\n");
    printf("a. add          s. subtract\n"
           "m. multiply     d. divide\nq. quit\n");
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

void add(float a, float b)
{
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void sub(float a, float b)
{
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}
void mul(float a, float b)
{
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}
void div(float a, float b)
{
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}
