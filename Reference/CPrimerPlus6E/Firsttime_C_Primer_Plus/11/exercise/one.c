#include <stdio.h>
void input(char *p,int n);

int main(void)
{
    int num;
    scanf("%d",&num);
    char words[num];
    printf("Ok, run the program!\n");
    getchar();//过滤掉回车！
    input(words,num);
    puts(words);
    return 0;
}

void input(char *p,int n)
{
    int i;
    for (i=0;i<n;i++)
	*(p+i) = getchar();
    *(p+i) = '\0';
}
