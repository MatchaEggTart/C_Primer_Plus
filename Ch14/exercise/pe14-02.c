#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
/*
#define LEN 4

char * s_gets(char * st, int n);
void trans(char * str);

struct month {
    char month_name[LEN];
    int days;
};
*/
int main(void)
{
    /*
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
    */
    int month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int day;
    int mon;
    int year;
    int count;
    int all_days;
    bool is_leap_year = false;

    puts("Please enter the date look like d.m.y(ex. 02.02.2002):");
    while (scanf("%d.%d.%d", &day, &mon, &year) == 3)

    {
        all_days = 0;
        if ((year % 100) == 0)
        {
            if ((year % 400) == 0)
                is_leap_year = true;
        }
        else if ((year % 4) == 0)
            is_leap_year = true;
        if  (mon > 12)
        {
            printf("It has not %d month in a year\n", mon);
            puts("Please enter the date look like d.m.y(ex. 02.02.2002):");
            continue;
        }
        if (day > month[mon - 1])
        {
            printf("%dth month has not %d days.\n", mon, day);
            puts("Please enter the date look like d.m.y(ex. 02.02.2002):");
            continue;
        }
        if ((!is_leap_year) && (mon == 2) && (day == 29))
        {
            printf("Ferbuary has not 29 days in %d(common year)\n", year);
            puts("Please enter the date look like d.m.y(ex. 02.02.2002):");
            continue;
        }
        for (count = 1; count < mon; count++)
        {
            all_days += month[count - 1];
            // printf("%d) %d\n", count, all_days);
        }
        all_days += day;
        if (mon > 2 && (!is_leap_year))
            all_days -= 1;
        printf("%d.%d.%d has %d days\n", day, mon, year, all_days);
    }

    return 0;
}
