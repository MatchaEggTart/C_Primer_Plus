#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[])
{
    FILE *in;
    int ch;
    
    if(argc < 2)
    {
        fprintf(stderr,"Usage: what the fuck.\n");
        exit(EXIT_FAILURE);
    }
    in=fopen(argv[1],"w");
    while(ch!=EOF)
    {
        putc(ch=getchar(),in);
    }
    if(fclose(in) != 0)
        fprintf(stderr,"Error in closing files\n");

    return 0;
}
