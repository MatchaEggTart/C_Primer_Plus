#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    int n = 0;
    bool in_e = false;

    while ((ch = getchar()) != '#')
    {
        if (ch == 'i' && in_e == true)
        {
            n++;
            in_e = false;
        }
        if (ch == 'e' && in_e == false)
        {
            in_e = true;
        }
    }
    printf("How many times for output 'ei', %d time(s)\n", n);

    return 0;
}
