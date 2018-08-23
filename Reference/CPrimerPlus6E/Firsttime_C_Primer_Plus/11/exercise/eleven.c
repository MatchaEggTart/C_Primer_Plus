#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 30
#define LIM 10
char *s_gets(char *,int);
void quest(void);
void origin(char **,int);
void asci(char **,int);
void lenth(char **,int);
int size_sp(char *);
void lenword(char **p,int n);

int main(void)
{
    int i=0;
    char *ori[LIM];
    char string[LIM][SIZE];
    char *p[LIM];//为何要定义个指针？
    char ch='0';
    printf("Enter the string\n1. ");
    while(i<LIM&&s_gets(string[i],SIZE)!=NULL)
    {
	p[i]=string[i];
	ori[i]=string[i];
	i++;
	printf("%d. ",i+1);
    }
    printf("\n");
    quest();
    while((ch=getchar())!='q')
    {
	switch(ch)
	{
	    case'a':
		origin(ori,i);
		quest();
		continue;
	    case'b':
		asci(p,i);
		quest();
		continue;
	    case'c':
		lenth(p,i);
		quest();
		continue; 
	    case'd':
		lenword(p,i);
		quest();
		continue;

	    default:break;
	}
    }
    puts("Bye!");
    return 0;
}
    
void origin(char **p,int i)
{
    int j;
    for(j=0;j<i;j++)
    {
	printf("%d. ",j+1);
	puts(p[j]);
    }
}

void asci(char **p,int n)
{
    int i,j;
    char *temp;
    for(i=0; i<n; i++)
	for(j=0; j<n-i-1; j++)
	    if (strcmp( p[j], p[j+1] ) > 0)
	    {
		temp = p[j];
		p[j] = p[j+1];
		p[j+1] = temp;
	    }
        origin(p,n);
}

void lenth(char **p,int n)
{
    int i,j;
    char *temp;
    for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	    if(strlen(p[j])>strlen(p[j+1]))
	    {
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	    }
    origin(p,n);
}

int size_sp(char *p)
{
    int i,a;
    a=0;
    for(i=0;p[i]!=' '&&p[i]!='\0';i++)
    {
		a++;
    }
    return a;
}

void lenword(char **p,int n)
{
    int i,j,k,a,b;
    char *temp;
    for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	{
	    if(size_sp(p[j])>size_sp(p[j+1]))
	    {
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	    }
	}
    origin(p,n);
}


void quest(void)
{
   printf("a.打印原字符串列表\n");
   printf("b.以ASCII顺序打印\n");
   printf("c.按长度递增顺序打印\n");
   printf("d.按第一单词长度由短到长打印\n");
   printf("q.退出\n");
}
