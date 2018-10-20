#include <stdio.h>
#include <string.h>
#define MAXTITL 41	//book's name size + 1('\0')
#define MAXAUTL 31	//writer's name size + 1('\0')
char * s_gets(char * st, int n);

struct book {			//创建结构；结构模板标记是book
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;	//声明library为一个book类型变量

    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title,
           library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author,
           library.title, library.value);
    printf("Done.\n");
    printf("%zd\n", sizeof(float));
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
