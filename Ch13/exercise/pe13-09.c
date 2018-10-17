#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    static int i = 1;
    char ch;

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
        if (ch == '\n')
            i++;
    //    printf("%d\n", i);
    rewind(fp);
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%2d.%s\n", i++, words);

    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
        puts(words);
        
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");

    return 0;
}
