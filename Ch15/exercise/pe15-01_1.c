#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 32

char * s_gets(char * st, int n);
bool check_bin(const char *st, int n);
int btoi(const char * st);
void cleanline(void);

int main(void)
{
    char bin[SIZE];
    bool check;
    printf("Enter the binary up to 32 bits :\n");
    
    while (s_gets(bin, SIZE) != NULL)
    {
        
        while (!check_bin(bin, SIZE))
        {
            puts("Enter the binary up to 32 bits (0 and 1)");
            s_gets(bin, SIZE);
        }
        if (bin[0] == '\0')
            break;
        printf("%s = %d\n",bin, btoi(bin));
        printf("Enter the binary up to 32 bits :\n");
        
    }
    puts("Bye!");

    return 0;
}

int btoi(const char * st)
{
    int val = 0;
    int count = 2;
    int zero = 0;

for (count = 0; st[count] != '\0' && count < SIZE; count++)
{
    if (st[count] == '1')
    {
        printf("true\n");
    }
    else
    {
        printf("wrong\n");
    }
    
        val += count;
    count *= 2;
}

    return val;
    //return val;
}

bool check_bin(const char * st, int n)
{
    bool check = true;
    int count;

    for (count = 0; count < n && st[count] != '\0'; count++)
    {
        if (st[count] != '1' && st[count] != '0')
        {
            return false;
        }
    }
    return check;
}

char * s_gets(char * st, int n)
{
    char * find;
    char * ret_val;

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

void cleanline(void)
{
    while (getchar() != 0)
        continue;
}