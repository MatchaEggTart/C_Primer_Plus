#include <stdio.h>
#include <stdbool.h>

bool check_site_open(int, int);

int main(void)
{
    int site, number;

    printf("Enter an integet.\n");
    scanf("%d", &number);
    printf("Enter the site you wanna check.\n");
    scanf("%d", &site);
    printf("%d's %d bit is %c\n",
        number, site, check_site_open(number, site) == true ? '1' : '0');

    return 0;
}

bool check_site_open(int n, int s)
{
    if (((n >>= s) & 01) == true)
        return true;
    else
        return false;
}