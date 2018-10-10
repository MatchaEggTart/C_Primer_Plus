#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pe12-07a.h"

int main(void)
{
    int sets, i;
    int dice, roll;
    int sides;
    int status;

    srand((unsigned int) time(0));
    printf("Enter the number of sets; enter q to stop : ");
    while (scanf("%d", &sets) == 1)
    {
	printf("How many sides and how many dice? ");
	if ((status = scanf("%d %d", &sides, &dice)) != 2)
	{
	    if (status == EOF)
		break;
	    else
	    {
		printf("You should have entered an integer.");
		printf(" Let's begin again.\n");
		while (getchar() != '\n')
		    continue;
		printf("How many sides? Enter 0 to stop .\n");
		continue;
	    }
	}
	printf("Here are %d sets of %d %d-sides throws.\n",
		sets, dice, sides);
	for (i = 0; i < sets; i++)
	{
	    printf("%d ", roll_n_dice(dice, sides));
	}
	printf("\nHow many sets? Enter q to stop: ");
    }

    return 0;
}
