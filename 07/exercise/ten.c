#include <stdio.h>
#define SINGLE 17850
#define HOUSEHOLD 23900
#define MARRIER 29750
#define DIVORCE 14875
#define TAX1 0.15
#define TAX2 0.28

int main(void)
{
    int choice;
    float salary, tax;

    printf("Which type?\n");
    while (scanf("%d", &choice) == 1)
    {
        if (choice < 1 || choice > 4)
        {
            printf("WARRING! Input again\n");
            continue;
        }
        printf("Input your salary: ");
        scanf("%f", &salary);
        switch (choice)
        {
            case 1:
                tax = SINGLE * TAX1 + (salary - SINGLE) * TAX2;
                break;
            case 2:
                tax = HOUSEHOLD * TAX1 + (salary - HOUSEHOLD) * TAX2;
                break;
            case 3:
                tax = MARRIER * TAX1 + (salary - MARRIER) * TAX2;
                break;
            case 4:
                tax = DIVORCE * TAX1 + (salary -DIVORCE) * TAX2;
                break;
            default: break;
        }
        printf("Your salary is %f, tax is %f\n", salary, tax);
        printf("Which type?\n");
    }
    printf("Done\n");

    return 0;
}
