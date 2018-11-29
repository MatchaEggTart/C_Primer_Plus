#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
#define FNSIZE 20
char * s_gets(char * st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    FILE * fp;
    int count = 0;
    int filecount;
    char filename[FNSIZE];
    int i;
    int size = sizeof(struct book);

    s_gets(filename, FNSIZE);    
    if ((fp = fopen(filename, "a+")) == NULL)
    {
        fprintf(stderr, "Can't create or open %s.\n", filename);
        exit(1);
    }

    rewind(fp);

    while (count < MAXBKS && fread(&library[count], size, 1, fp) == 1)
    {
        if (count == 0)
            printf("Current contents of %s\n", filename);
        printf("%s by %s: $%.2f\n", library[count].title,
               library[count].author, library[count].value);
        count++;
    }

    filecount = count;
    if (count == MAXBKS)
    {
        fprintf(stderr, "%s is full\n", filename);
        exit(2);
    }

    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        puts("Enter the author's name.");
        s_gets(library[count].author, MAXAUTL);
        puts("Enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("Enter the next title");
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (i = 0; i < count; i++)
            printf("%s by %s: $%.2f\n", library[i].title,
                   library[i].author, library[i].value);
        fwrite(&library[filecount], size, count - filecount, fp);
    }
    else
        printf("No thing, Too bad\n");
    puts("Bye.\n");
    fclose(fp);

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
