#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
int count_file(char ch, FILE * fp);
char * s_gets(char * st, int n);

int main(int argc, char * argv[])
{
    FILE *fp;
    char file_tar[SLEN];
    int file_number, char_number;
    int ch;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s character filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    //    printf("argc = %d\nstrlen = %zd\n", argc, strlen(argv[1]));
    if (strlen(argv[1]) != 1)
    {
        fprintf(stderr, "Usage: %s character filename\n", argv[0]);
        fprintf(stderr, "%s is not a character\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    if (argc == 2)
    {
        printf("Typing the filename, please. ");
        s_gets(file_tar, SLEN);
        if (file_tar[0] == '\0')
        {
            printf("Done!\n");
            exit(EXIT_FAILURE);
        }
        if ((fp = fopen(file_tar, "r")) == NULL)
        {
            fprintf(stderr, "Can't open the file %s, maybe it's not exist\n", file_tar);
            exit(EXIT_FAILURE);
        }
        //        printf("haha\n");
        char_number = count_file(ch, fp);
        printf("So,\n%s has %d \'%c\'\n", file_tar, char_number, ch);
        if (fclose(fp) != 0)
            fprintf(stderr, "Error in closing files\n");

    }
    if (argc > 2)
    {
        for (file_number = 2; file_number < argc; file_number++)
        {
            if ((fp = fopen(argv[file_number], "r")) == NULL)
            {
                fprintf(stderr, "Can't open the file %s, maybe it's not exist\n", argv[file_number]);
            }
            else
            {
                char_number = count_file(ch, fp);
                printf("So,\n%s has %d \'%c\'\n", argv[file_number], char_number, ch);

            }
            if (fclose(fp) != 0)
                fprintf(stderr, "Error in closing files\n");
        }
    }
    return 0;
}

int count_file(char ch, FILE * fp)
{
    char character;
    int i = 0;
    
    while ((character = getc(fp)) != EOF)
        if (character == ch)
            i++;
    
    return i;
}

char * s_gets(char * st, int n)
{
    char *ret_val;
    char *find;

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
