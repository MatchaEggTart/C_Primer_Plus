#include <stdio.h>
#include "pe12-2a.h"

static int mode;
static float distance, fuel_consumed;

void set_mode(int n)
{
    if (n == 0)
	mode = 0;
    else if (n == 1)
	mode = 1;
    else
    {
	printf("Invalid mode specified. Mode 1(US) used.\n");
	mode = 1;
    }
}

void get_info(void)
{
    if (mode == 0)
    {
	printf("Enter distance traveled in kilometers: ");
	scanf("%f", &distance);
	printf("Enter fuel consumed in liters: ");
	scanf("%f", &fuel_consumed);
    }
    if (mode == 1)
    {	
	printf("Enter distance traveled in miles: ");
	scanf("%f", &distance);
	printf("Enter fuel consumed in gallons: ");
	scanf("%f", &fuel_consumed);
    }
}

void show_info(void)
{
    if (mode == 0)
    {
	printf("Fuel consumption is %.2f liters per 100 km.\n",
		(fuel_consumed / distance) * 100);
    }
    if (mode == 1)
    {	printf("Fuel consumption is %.1f miles per gallon.\n",
		distance / fuel_consumed);
    }
}
