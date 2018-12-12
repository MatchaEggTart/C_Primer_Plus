#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 4

char * s_gets(char * st, int n);
void trans(char * str);

struct month {
    char month_name[LEN];
    int days;
};

int main(void)
{
    struct month years[12] = {
        { "JAN", 31},
        { "FEB", 28}, 
        { "MAR", 31},
        { "APR", 30},
        { "MAY", 31},
        { "JUN", 30},
        { "JUL", 31},
        { "AUG", 31},
        { "SEP", 30},
        { "OCT", 31},
        { "NOV", 30},
        { "DEC", 31}
    };
    
    char mon[LEN];
    char copy[LEN];
    int count;
    bool find_the_month = false;

    puts("Enter the month's name (ex. January  enter 'JAN' or 'Jan' or 'jan'");
    puts("                            February enter 'FEB' or 'Feb' or 'feb'.etc)");
    puts("(empty line to exit):");
    while ((s_gets(mon, LEN) != NULL) && mon[0] != '\0')
    {
        strcpy(copy, mon);
        trans(copy);
        for (count = 0; count < LEN; count++)
        {
            if (strcmp(copy, years[count].month_name) == 0)
            {
                find_the_month = true;
                break;
            }
        }
        if (find_the_month)
            printf("\n%s(%d) has %d days.\n\n", mon, count + 1, years[count].days);
        else
            puts("\nPlease enter the true abbreviated month name!\n");
        puts("Enter the month's name (ex. January  enter 'JAN' or 'Jan' or 'jan'");
        puts("                            February enter 'FEB' or 'Feb' or 'feb'.etc)");
        puts("(empty line to exit):");
    }
    puts("Bye!");

    return 0;
}

void trans(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
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
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
