#include <stdio.h> 	//Please gcc -c s_gets.c
#include <string.h>	//make s_gets.o to use

char * s_gets(char * st, int n)
{
    char * ret_val;
    //    int i = 0;
    char * find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        /*        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
        */
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    
    return ret_val;
}
