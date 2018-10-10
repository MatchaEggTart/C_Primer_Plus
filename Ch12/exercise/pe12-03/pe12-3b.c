#include <stdio.h>
#include "pe12-3a.h"

int main(void)
{
    int mode;
int get;
float answer;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
	get = set_mode(mode);
	answer = get_info(get);
	show_info(answer, get);
	printf("Enter 0 for metric mode, 1 for US mode");
	printf(" (-1 to quit): ");
	scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}
