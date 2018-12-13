#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 30
char * s_gets(char * st, int n);
struct try {
    char fname[30];
    char lname[30];
};

int main(void)
{
    FILE * fp;
    struct try name[SIZE];
    int size = sizeof (struct try);
    long count = 0;
    long filecount;
    
    if ((fp =fopen("fwrite.dat", "a+")) == NULL)
    {
        fprintf(stderr, "Can't open the fwrite.dat\n");
        exit(1);
    }
    rewind(fp);
    while (count < 30 && fread(&name[count], size, 1, fp) == 1)
    {
        printf("%s %s\n", name[count].fname, name[count].lname);
        count++;
    }
    filecount = count;
    while (s_gets(name[count].fname, SIZE) != NULL && name[count].fname[0] != '\0')
    {
        puts("last name");
        s_gets(name[count].lname, SIZE);
        puts("Next first name");
        count++;
    }
    if (count > 0)
    {
        puts("You new\n");
        fwrite(&name[filecount], size, count - filecount, fp);
    }
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
