#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;
    puts("\nEnter strings (empty line to quit):");
    while(gets_s(words,STLEN)!=NULL&&words[0]!='\n')
    {
	i=0;
	while(words[i]!='\n'&&words[i]!='\0')
	    i++;
	if(words[i]=='\n')
	    words[i]='\0';
	else
	    while(getchar()!='\n')
		continue;
	puts(words);
    }
    puts("done!\n");
    return 0;
}
