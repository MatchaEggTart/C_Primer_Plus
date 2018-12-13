#include <stdio.h>
#define LEN 20
#define PNUMBER 5

struct name {
    char fname[LEN];
    char mname[LEN];
    char lname[LEN];
};

struct resume {
    long unsigned int ssn;		//Social Security Number
    struct name handle;
};

void prin_data(struct resume [], int n);

int main(void)
{
    struct resume data[PNUMBER];
    int count = 0;
    
    while (count < PNUMBER)
    {
        puts("Enter your imformation");
        printf("Social Security Number: ");
        scanf("%lu", &data[count].ssn);
        while (getchar() != '\n')
            continue;
        printf("Your First Name:        ");
        scanf("%s", data[count].handle.fname);
        printf("Your Middle Name:       ");
        scanf("%s", data[count].handle.mname);
        printf("Your Last Name:         ");
        scanf("%s", data[count++].handle.lname);
    }
    prin_data(data, count);

    return 0;
}

void prin_data(struct resume data[], int n)
{
    int count;
    for (count = 0; count < n; count++)
        printf("%s, %s %c. -- %9u\n", data[count].handle.fname,
               data[count].handle.lname, data[count].handle.mname[0],
               data[count].ssn);
}
