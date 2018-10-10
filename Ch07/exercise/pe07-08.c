#include <stdio.h>
void star(void);
#define OVERTIME 1.5
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25

int main(void)
{
    float time, total_wages, tax;
    float salary = 0;
    int choice;

    star();
    printf("\n");
    while (scanf("%d", &choice) == 1)
    {
        if (choice == 5)
            break;
        salary = 0;
        switch (choice)
        {
            case 1:
                salary = 8.75;
                break;
            case 2:
                salary = 9.33;
                break;
            case 3:
                salary = 10.00;
                break;
            case 4:
                salary = 11.20;
                break;
            default :
                salary = 0;
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

void star(void)
{
    int i;

    printf("\n");
    for (i = 0; i < 66; i++)
        printf("*");
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("1) $ 8.75/hr				2) $ 9.33/hr\n");
    printf("3) $10.00/hr				4) $11.20/hr\n");
    printf("5) quit\n");
    for (i = 0; i < 66; i++)
        printf("*");
    printf("\n");

}
