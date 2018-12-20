//用指针修改文件内容
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 	10

char * s_gets(char * st, int n);
void eatline(void);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    bool book_is_delete;
};
void delete_book(struct book *);
void edit_book(struct book *);

int main(void)
{
    struct book library[MAXBKS];
    //    struct book delete_list[MAXBKS];
    struct book * str_prt;
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);
    //    int dele_size = 0;
    char choice;

    if ((pbooks = fopen("book.dat", "r + b")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }

    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        str_prt = &library[count];
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f delete = %d\n", library[count].title,
               library[count].author, library[count].value, library[count].book_is_delete);
        printf("Do you have a order?\n"
               "d) Delete this book	e) Edit this book\n"
               "n) Next book\n");
        choice = getchar();
        eatline();
        choice = tolower(choice);
        while (strchr("den", choice) == NULL)
        {
            puts("Please enter a d, e, or n:");
            choice = tolower(getchar());
            eatline();
        }
        switch (choice)
        {
            case 'd' : {
                //                delete_list[dele_size] = library[count];
                count--;
                //                dele_size++;
            }
                break;
            case 'e' : edit_book(str_prt);
                break;
            case 'n' : break;
        }
        count++;
    }

    filecount = count;		//important
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.\n", stderr);
        exit(2);
    }

    puts("Please add new book title");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        puts("Please enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value");
        scanf("%f", &library[count].value);
        eatline();
        library[count++].book_is_delete = 0;
        if (count < MAXBKS)
            puts("Please enter the next title.");
    }
    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    else
        puts("No books? Too bad.\n");
    fclose(pbooks);
    if ((pbooks = fopen("book.dat", "wb")) == NULL)
    {
        fputs("Can't open book.dat", stderr);
        exit(3);
    }
    rewind(pbooks);
    fwrite(&library[0], size, count, pbooks);

    puts("Bye.\n");
    fclose(pbooks);

    return 0;
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

void delete_book(struct book * str_ptr)
{
    str_ptr->book_is_delete = true;
}
void edit_book(struct book * str_ptr)
{
    
    puts("Please enter the thile.");
    s_gets(str_ptr->title, MAXTITL);
    puts("Please enter the author.");
    s_gets(str_ptr->author, MAXAUTL);
    puts("Now enter the value");
    scanf("%f", &str_ptr->value);
    eatline();
    str_ptr->book_is_delete = 0;
}
