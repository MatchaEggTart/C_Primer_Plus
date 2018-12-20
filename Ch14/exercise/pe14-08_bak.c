#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define SEAT_SIZE 12
#define NSIZE 30

struct data {
    int seat_number;
    bool booking;
    char fname[NSIZE];
    char lname[NSIZE];
};

char showmenu(void);
void alphabetical_show(struct data str [], int n);
void assign(struct data * str, int n);
void delete_seat(struct data * str, int n);
char * s_gets(char * st, int n);
void eatline(void);
int main(void)
{
    struct data air_giant[SEAT_SIZE];
    int index;
    char choice;
    int booked = 0;
    for (index = 0; index < SEAT_SIZE; index++)
    {
        air_giant[index].fname[0] = '\0';
        air_giant[index].lname[0] = '\0';
        air_giant[index].seat_number = index;
        air_giant[index].booking = 0;
    }
    
    choice = showmenu();

    while (choice != 'f')
    {
        while (strchr("abcdef", choice) == NULL)
        {
            choice = showmenu();
        }
        switch (choice)
        {
            case 'a' : {
                printf("\n=>The number of empty seat is:\n");
                for (index = 0; index < SEAT_SIZE; index++)
                    if (!air_giant[index].booking)
                        booked++;
                printf("%d seats\n", booked);
                index = 0;
                booked = 0;
            }	break;
            case 'b' : {
                printf("\n=>The list of empty seats is:\n");
                for (index = 0; index < SEAT_SIZE; index++)
                    if (!air_giant[index].booking)
                        printf("%2d ", air_giant[index].seat_number);
                printf("\n");
                index = 0;
            } 	break;
            case 'c' : alphabetical_show(air_giant, SEAT_SIZE);
            	break;
            case 'd' : assign(&air_giant[0], SEAT_SIZE);
                break;
            case 'e' : delete_seat(&air_giant[0], SEAT_SIZE);
                break;
        }
        choice = showmenu();
    }
    
}

char showmenu(void)
{
    char ch;

    puts("To choose a function, enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Quit");

    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

void alphabetical_show(struct data str [], int n)
{
    int seek, top;
    int index;
    struct data temp;
    for (top = 0; top < n; top++)
        for (seek = top + 1; seek < n; seek++)
            if (strcmp(str[top].fname, str[seek].lname) > 0)
            {
                temp = str[top];
                str[top] = str[seek];
                str[seek] = temp;
            }
    printf("First Name Last Name  Seat Number\n");
    for (index = 0; index < n; index++)
        if (str[index].booking)
            printf("%-10s %-10s %6d\n", str[index].fname,
                   str[index].lname, str[index].seat_number);
}

void assign(struct data * str, int n)
{
    int index = 0;
    printf("The empty number of seat is:\n");
    for (index = 0; index < n; index++)
    {
        
        if (!(str + index)->booking)
            printf("%2d ", (str + index)->seat_number);
    }
    printf("\n");
    puts("Choice the number of seat.");
    scanf("%d", &index);
    eatline();

     while (index > 11 || (str + index)->booking)
    {
        printf("The site is booking or isnot true number!\n");
        scanf("%d", &index);
        eatline();
    }
     printf("%d book? %d\n", index, (str+ index)->booking);
     

    puts("Enter the first name.");
    s_gets((str + index)->fname, NSIZE);
    puts("Enter the last name.");
    s_gets((str + index)->lname, NSIZE);
    (str + index)->booking = 1;
}

void delete_seat(struct data * str, int n)
{
    int index = 0;
    printf("The number of seat booked is:\n");
    for (index = 0; index < n; index++)
    {
        
        if ((str + index)->booking)
            printf("%2d ", (str + index)->seat_number);
    }
    printf("\n");
    puts("Choice the number of seat to delete.");
    scanf("%d", &index);
    eatline();
    printf("%d is %d\n", index , (str+ index)->booking);
    (str + index)->booking = 0;
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

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}
