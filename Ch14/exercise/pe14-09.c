#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define SEAT_SIZE 12
#define NSIZE 30

struct data {
    int seat_number;
    char fname[NSIZE];
    char lname[NSIZE];
    bool booking;
    bool confirm;
};

struct flight
{
    int plane_id;
    struct data;
}

char showmenu(void);
void empty_seat(struct data *);
void empty_number(struct data *);
void alphabetical_show(struct data *);
void assign(struct data *);
void delete(struct data *);
//void confirmed(struct data *);

void eatline(void);
char * s_gets(char * st, int n);
void showdata(struct data *);


int main(void)
{
    FILE * fp;
    char choice;
    int count;
    int size = sizeof(struct data);
    struct data air_giant[SEAT_SIZE];
    printf("size is %zd\n", sizeof(struct data));
    for (count = 0; count < SEAT_SIZE; count++)
    {
        air_giant[count].seat_number = count + 1;
        air_giant[count].fname[0] = '\0';
        air_giant[count].lname[0] = '\0';
        air_giant[count].booking = false;
        air_giant[count].confirm = false;
        //        printf("%p\n", &air_giant[0] + count);
    }

    if ((fp = fopen("fly.dat", "r + b")) == NULL)
    {
        fputs("Can't open fly.dat\n", stderr);
        exit(1);
    }
    rewind(fp);
    count = 0;
    while (count < SEAT_SIZE && fread(&air_giant[count], size, 1, fp) == 1)
    {
        count++;
    }
    fclose(fp);
    
    choice = showmenu();
    while (choice != 'f')
    {
        while (strchr("abcdefm", choice) == NULL)
        {
            puts("\n\n\nEnter a, b, c, d, e or f");
            choice = showmenu();
        }

        switch (choice)
        {
            case 'a' : empty_seat(&air_giant[0]);
                break;
            case 'b' : empty_number(&air_giant[0]);
                break;
            case 'c' : alphabetical_show(air_giant);
                break;
            case 'd' : assign(&air_giant[0]);
                break;
            case 'e' : delete(&air_giant[0]);
                break;
                //          case 'f' : confirmed(&air_giant[0]);
                //                break;
            case 'm' : showdata(&air_giant[0]);
                break;
        }
        choice = showmenu();
    }

    if ((fp = fopen("fly.dat", "w + b")) == NULL)
    {
        fputs("Can't write fly.dat\n", stderr);
        exit(1);
    }
    fwrite(&air_giant[0], size, SEAT_SIZE, fp);
    fclose(fp);
}

void empty_seat(struct data * pst)
{
    int count = 0;
    int num_empty_seat = 0;
    puts("\n\n\nHere is the number of empty seat");
    for (count = 0; count < SEAT_SIZE; count++)
    {
        if (!pst[count].booking)
            num_empty_seat++;
    }
    printf("%d seats is empty\n\n", num_empty_seat);
}


void empty_number(struct data * pst)
{
    int count = 0;
    int num_empty_seat = 0;
    puts("\n\n\nHere is the empty seats's number\n");
    for (count = 0; count < SEAT_SIZE; count++)
    {
        if (!pst[count].booking)
            printf("%-2d ", pst[count].seat_number);
    }
}
void alphabetical_show(struct data * pst)
{
    struct data data_copy[SEAT_SIZE];
    struct data temp;
    int top, seek, count;
    for (count = 0; count < SEAT_SIZE; count++)
    {
        data_copy[count].confirm = pst[count].confirm;
        data_copy[count].booking = pst[count].booking;
        data_copy[count].seat_number = pst[count].seat_number;
        strcpy(data_copy[count].fname, pst[count].fname);
        strcpy(data_copy[count].lname, pst[count].lname);
    }

    for (top = 0; top < SEAT_SIZE; top++)
        for (seek = top + 1; seek < SEAT_SIZE; seek++)
            if (strcmp(data_copy[top].lname, data_copy[seek].fname) > 0)
            {
                temp = data_copy[top];
                data_copy[top] = data_copy[seek];
                data_copy[seek] = temp;
            }
    for (count = 0; count < SEAT_SIZE; count++)
    {
        if (data_copy[count].booking)
            printf("%-15d %-10s %-10s %d\n", data_copy[count].seat_number,
                   data_copy[count].fname, data_copy[count].lname,
                   data_copy[count].booking);
    }

}

void assign(struct data * pst)
{
    int count = 0;
    puts("Whice seat your want to book?");
    scanf("%d", &count);
    eatline();
    count = count - 1;
    while (pst[count].booking)
    {
        puts("This site is booking.\nChose other one, please\n");
        scanf("%d", &count);
        eatline();
        count = count - 1;
    }

    puts("Enter the First Name.");
    s_gets(pst[count].fname, NSIZE);
    puts("Enter the Last  Name.");
    s_gets(pst[count].lname, NSIZE);
    pst[count].booking = true;
}

void delete(struct data * pst)
{
    int count = 0;
    puts("Whice seat you want to delete?");
    scanf("%d", &count);
    eatline();
    count = count - 1;
    while (!pst[count].booking)
    {
        puts("This site is empty.\nChose other one, please\n");
        scanf("%d", &count);
        eatline();
        count = count - 1;
    }
    pst[count].fname[0] = '\0';
    pst[count].lname[0] = '\0';
    pst[count].booking = false;
}

char showmenu(void)
{
    char ch;
    puts("\n\n\n");
    puts("To choose a function, enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
    puts("\n\n\n");

    ch = getchar();
    eatline();
    return ch;
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

void showdata(struct data * pst)
{
    int n;
    printf("SeatNumber  FirstName  LastName   Book    Confirmed       address\n");
    for (n = 0; n < SEAT_SIZE; n++)
    {
        printf("%-11d %-10s %-10s   %d    %-12s   %p\n", (pst+n)->seat_number,
               (pst+n)->fname, (pst+n)->lname, (pst+n)->booking,
               (pst+n)->confirm ? "Confirmed" : "Unconfirmed", (pst + n));
    }
}

