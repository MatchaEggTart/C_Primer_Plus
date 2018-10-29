#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS	10
char * s_gets(char * st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("book.dat", "a + b")) == NULL)	//书名
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);	//Why in't EXITURE;
    }

    rewind(pbooks);					//返回流的前面
    while (count < MAXBKS && fread(&library[count], size,	//读取phooks
                                   1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title,
               library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS)				//能存的书的最大限量
    {
        fputs("The book.dat file is full.\n", stderr);
        exit(2);
    }

    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL	//获取书本名字
           && library[count].title[0] != '\0')		//验证首字符Enter退出
    {
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);		//获取作者名字
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')			//处理价格后面额外字符
            continue;
        if (count < MAXBKS)
            puts("Enter the next title.");
    }

    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        fwrite(&library[filecount], size, count - filecount,			//把内容写进dat
               pbooks);
    }
    else
        puts("No book? Too bad.\n");

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
