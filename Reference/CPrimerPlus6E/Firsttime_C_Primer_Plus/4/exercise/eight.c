#include<stdio.h>
#define GALLON 3.785  //1 gallon = 2.785 litre
#define MILE 1.609   //1 mile = 1.609 kilometer

int main(void)
{
	float mile,gallon;
	printf("Please input miles and gallons:");
	scanf("%f %f",&mile,&gallon);
	printf("Miles per gallon:%.1f\n",mile/gallon);
	printf("Litres per 100 kilometre:%.1f\n",
			gallon*GALLON/(100*mile*MILE));
	return(0);
}
