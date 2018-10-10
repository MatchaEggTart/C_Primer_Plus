#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;
    
    printf("Give me the character, please. $_\b");
    scanf("%c", &ch);
    printf("Give us the row, column\n");
    printf("Row    : ");
    scanf("%d", &i);
    printf("Column : ");
    scanf("%d", &j);
    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    int k, h;
    
    for (h = 0; h < j; h++)
    {
        for (k = 0; k < i; k++)
            putchar(ch);
        printf("\n");
    }
}
