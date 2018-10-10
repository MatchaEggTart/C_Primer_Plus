#include <stdio.h>
#include <stdlib.h>
#include "roll.h"

int answer;

int roll(void)
{
    answer = rand() % 100 + 1;

}
