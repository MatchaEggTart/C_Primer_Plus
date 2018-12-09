#include <stdio.h>
#include <string.h>
#define LEN 30
typedef char * STRING;	//****
STRING s_gets(STRING st, int n);	//****
typedef struct name {
    char fname[LEN];
    char lname[LEN];
} name;
/*
typedef struct name {
    fname[LEN];
    lname[LEN];
} name;			这个有问题！
*/
int main(void)
{
    name names;		//***
    char temp[LEN];
    puts("Enter your First Name, Sir");
    s_gets(temp, LEN);
    strcpy(names.fname, temp);
    puts("Enter your Last Name, Sir");
    s_gets(temp, LEN);
    strcpy(names.lname, temp);
    printf("\nSo your name is %s %s\n",
           names.fname, names.lname);

    return 0;
}

STRING s_gets(STRING st, int n)
{
    STRING ret_val;
    STRING find;

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
