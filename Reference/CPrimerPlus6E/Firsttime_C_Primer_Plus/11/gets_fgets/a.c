#include <stdio.h>
int main(void)
{
    puts("\ngets:");
    char line1[81];
    while(gets(line1))
	puts(line1);
    puts("\nfgets:");
    char line2[81];
    while(fgets(line2,81,stdin))
	fputs(line2,stdout);
    puts("\nDone!");
    return 0;
}
