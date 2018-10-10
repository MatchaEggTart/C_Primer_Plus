#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char * argv[])
{
    char mode = 'p';
    bool run = true;
    int ch;

    if (argc > 2)
    {
        printf("Usage: %s [-p | -u | -l]\n", argv[0]);
        run = false;
    }
    else if (argc ==2)
    {
        if (argv[1][0] != '-')
        {
            printf("Usage: %s [-p | -u | -l]\n", argv[0]);
            run = false;
        }
        else
            switch (argv[1][1])
            {
                case 'p' :
                case 'u' :
                case 'l' :
                    mode = argv[1][1];


                    break;
                default  :
                    printf("%s is an invalid flag; ", argv[1]);
                    printf("using default flag (-p).\n");
            }
    }

    if (run)
        while ((ch = getchar()) != EOF)
        {
            switch (mode)
            {
                case 'p' : putchar(ch);
                    break;
                case 'u' : putchar(toupper(ch));
                    break;
                case 'l' : putchar(tolower(ch));
                    break;
            }
        }
    return 0;
}
