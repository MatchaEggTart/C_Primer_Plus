#include <stdio.h>

int main(void)
{
    int ch;

    while((ch = getchar())!=EOF)
        putchar(ch);

    return 0;
}
//write a file . ./echo_eof > filename
//read a file . ./echo_eof < filename
//copy a file . ./echo_eof < filename > copy_name  || ./echo_eof > copy_name < filename
