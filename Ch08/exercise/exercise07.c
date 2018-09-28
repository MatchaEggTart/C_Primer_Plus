#include <stdio.h>
char star(void);
#define OVERTIME 1.5
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25

int main(void)
{
    float time, total_wages, tax;
    float salary = 0;
    int choice;

    while ((choice = star()) != 'q')
    {
        if (choice == 5)
            break;
        salary = 0;
        switch (choice)
        {
            case 'a':
                salary = 8.75;
                break;
            case 'b':
                salary = 9.33;
                break;
            case 'c':
                salary = 10.00;
                break;
            case 'd':
                salary = 11.20;
                break;
            default :
                salary = 0;
                continue;
        }
        if (salary == 0)
        {
            printf("Fuck! Again\n!");
            continue;
        }
        printf("How many hours did you work last month?\n");
        scanf("%f", &time);
        if (time > 40)
            total_wages = ((time - 40) * OVERTIME + 40) * salary;
        else
            total_wages = time * salary;
        if (total_wages < 300)
            tax = total_wages * TAX1;
        else if (total_wages < 450)
            tax = (total_wages - 300) * TAX2 + 300 * TAX1;
        else
            tax = (total_wages - 450) * TAX3 + 150 * TAX2 + 300 * TAX1;
        printf("\nSo\nYour total wages is %.2f\nYour tax is %.2f\n"
               "Take - home pay is %.2f\n", total_wages, tax, total_wages - tax);
        star();
    }
    printf("Bye!\n");

    return 0;
}

char star(void)
{
    int i;
    char ch;

    printf("\n");
    for (i = 0; i < 66; i++)
        printf("*");
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("a) $ 8.75/hr				b) $ 9.33/hr\n");
    printf("c) $10.00/hr				d) $11.20/hr\n");
    printf("q) quit\n");
    for (i = 0; i < 66; i++)
        printf("*");
    printf("\n");
    ch = getchar();
    
    return ch;
}
