#include <stdio.h>
#include "pe12-3a.h"

int set_mode(int n)
{
    int mode;

    if (n == 0)
	mode = 0;
    else if (n == 1)
	mode = 1;
    else
    {
	printf("Invalid mode specified. Mode 1(US) used.\n");
	mode = 1;
    }

    return mode;
}

float get_info(int mode)
{
    float answer;
    float distance, fuel_consumed;
    if (mode == 0)
    {
	printf("Enter distance traveled in kilometers: ");
	scanf("%f", &distance);
	printf("Enter fuel consumed in liters: ");
	scanf("%f", &fuel_consumed);
	answer = (fuel_consumed / distance) * 100;
    }
    if (mode == 1)
    {	
	printf("Enter distance traveled in miles: ");
	scanf("%f", &distance);
	printf("Enter fuel consumed in gallons: ");
	scanf("%f", &fuel_consumed);
	answer = distance / fuel_consumed;
    }

    return answer;
}

void show_info(float answer, int mode)
{
    if (mode == 0)
    {
	printf("Fuel consumption is %.2f liters per 100 km.\n",
		answer);
    }
    if (mode == 1)
    {	printf("Fuel consumption is %.1f miles per gallon.\n",
	    answer);
    }
}
