#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

void sort_title(struct book library[], int count);
void sort_value(struct book library[], int count);

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [Enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')	//library[count].title[0] != '\n' die in '\n'
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Please enter the next title\n");
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s : $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        sort_title(library, count);
        sort_value(library, count);
    }
    else
        printf("No books? Too bad\n");

    return 0;
}

void sort_title(struct book library[],int count)
{
    struct book temp;
    int top, seek;
    int index;

    puts("\nsort by title.");
    for (top = 0; top < count; top++)
        for (seek = top + 1; seek < count; seek++)
            if (strcmp(library[top].title, library[seek].title) > 0)
            {
                temp = library[top];
                library[top] = library[seek];
                library[seek] = temp;
            }
    for (index = 0; index < count; index++)
        printf("%s by %s : $%.2f\n", library[index].title,
               library[index].author, library[index].value);
}
void sort_value(struct book library[], int count)
{
    struct book temp;
    int top, seek;
    int index;

    puts("\nsort by value.");
    for (top = 0; top < count; top++)
        for (seek = top + 1; seek < count; seek++)
            if (library[top].value > library[seek].value)
            {
                temp = library[top];
                library[top] = library[seek];
                library[seek] = temp;
            }
    for (index = 0; index < count; index++)
        printf("%s by %s : $%.2f\n", library[index].title,
               library[index].author, library[index].value);

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
