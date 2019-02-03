#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define AMOUNT 12
#define LEN 4
char * s_gets(char * st, int n);
void input_mon(char * st);

struct mon {
    char mname[LEN];
    int days;
    int mnum;
};

int main(void)
{
    struct mon month[AMOUNT] = {
        { "JAN", 31, 1 },
        { "FEB", 28, 2 },
        { "MAR", 31, 3 },
        { "APR", 30, 4 },
        { "MAY", 31, 5 },
        { "JUN", 30, 6 },
        { "JUL", 31, 7 },
        { "AUG", 31, 8 },
        { "SEP", 30, 9 },
        { "OCT", 31, 10 },
        { "NOV", 30, 11 },
        { "DEC", 31, 12 }
    };
    char mon_in[LEN];
    bool mon_found = false;
    int i = 0;
    int sum = 0;
    int j;

    s_gets(mon_in, LEN);
    input_mon(mon_in);
    while (i < AMOUNT)
    {
        if (strcmp(mon_in, month[i].mname) == 0)
        {
            mon_found = true;
            break;
        }
        else
            i++;
    }
    if (mon_found)
    {
        for (j = 0; j <= i; j++)
            sum += month[j].days;
        printf("From the first day from a year to %d) %s have %d days\n", i + 1,
               month[i].mname, sum);
    }
    else
        printf("We don't understand %s\n", mon_in);
    
    return 0;

}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            * find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

void input_mon(char * str)
{
    while (* str)
    {
        * str = toupper(* str);
        str++;
    }
}
