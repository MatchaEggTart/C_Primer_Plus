#include<stdio.h>
int main()
{
	const float CHANGE=30.48;
	float cm,feet,incles;
	int f;
	printf("Enter a height in centimeters: ");
	scanf("%f",&cm);
	feet=cm/30.48;
	f=(int)feet;
	incles=(feet-f)*12;
	printf("%.1f cm = %d feet, %.1f inches\n",cm,f,incles);
	while(cm>0)
	{	
		printf("Enter a height in centimeters:  (<=0 to quit): ");
		scanf("%f",&cm);
		feet=cm/30.48;
		f=(int)feet;
		incles=(feet-f)*12;
		printf("%.1f cm = %d feet, %.1f inches\n",cm,f,incles);

	}
	printf("bye\n");
	return 0;
}
