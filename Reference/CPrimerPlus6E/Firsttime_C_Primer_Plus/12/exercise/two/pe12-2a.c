#include <stdio.h>

int cho_mode = 0;
float lenth=0.00;
float fuel=0.00;

void set_mode(int n)
{
    if(n>1)
    {
        cho_mode=1;
        printf("Invalid mode specified. Mode 1(US) used.\n");
    }
    else
        cho_mode=n;
}

void get_info(void)
{
    if (cho_mode==0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%f",&lenth);
        printf("Enter fuel consumed in liters: ");
        scanf("%f",&fuel);
    }
    else
    {
        printf("Enter distance traveled in miles: ");
        scanf("%f",&lenth);
        printf("Enter fuel consumed in gallons: ");
        scanf("%f",&fuel);
    }
}

void show_info(void)
{
    if (cho_mode==0)
    {
        printf("Fuel consumption is %.2f liters per 100km.\n",fuel*100/lenth);
    }
    else
    {
        printf("Fuel consupmption is %.1f miles per gallon.\n",lenth/fuel);
    }
}
