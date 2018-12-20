#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NLEN 30

char * s_gets(char * st, int n);

struct name {
    char fname[NLEN];
    char lname[NLEN];
};

int main(void)
{
    char filename[NLEN];
    struct name names[NLEN];
    FILE * fp;
    int count = 0;
    int size;
    int filecount;
    int index;

    size = sizeof (struct name);

    puts("Enter the file name.");
    s_gets(filename, NLEN);
    if ((fp = fopen(filename, "a +")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s.\n", filename);
        exit(1);
    }
    rewind(fp);
    while (count < NLEN && fread(&names[count], size, 1, fp))
    {
        printf("%d)\nFirst Name\n%s\nLast Name\n%s\n", count, names[count].fname, names[count].lname);
        count++;
    }
    for (index = 0; index < count; index++)
    {
        printf("%s %s\n", names[index].fname, names[index].lname);
    }
    /*
    filecount = count;
    puts("Enter the new first name.\nEnter the [enter] in first line to quit");
    while ((s_gets(names[count].fname, NLEN) != NULL) && names[count].fname[0] != '\0')
    {
        s_gets(names[count++].lname, NLEN);
    }
    if (count > 0)
    {
        puts("Here is the new name(s)");
        for (index = 0; index < count; index++)
            if (index == 0);
            else
                printf("%d)\nFirst Name\n%s\nLast Name\n%s\n", index, names[index].fname, names[index].lname);
        fwrite(&names[filecount], size, count - filecount, fp);
    }
    */
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
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}


