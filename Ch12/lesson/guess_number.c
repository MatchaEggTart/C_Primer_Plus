#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "roll.h"

int main(void)
{
    int number;
    int status;

    srand((unsigned int) time(0));	//why
    roll();
    printf("Enter the number you guess, EOF to stop.\n");
    while ((status = scanf("%d", &number)) == 1)
    {
	if (number > answer)
	{
	    printf("It's too big!\n");
	    continue;
	}
	if (number < answer)
	{
	    printf("It's too small!\n");
	    continue;
	}
	if (number == answer)
	{
	    printf("That's right!\n");
	    break;
	}
	else
	{
	    puts("Try again!");
	    continue;
	}
    }

    puts("Done!");

    return 0;
}
