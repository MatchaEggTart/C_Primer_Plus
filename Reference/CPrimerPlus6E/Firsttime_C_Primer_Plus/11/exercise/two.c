#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 40
int main(void)
{
    int n,i;
    char words[SIZE];
    scanf("%d",&n);
    getchar();
    fgets(words,SIZE,stdin);
    fputs(words,stdout);
    for(i=0;i<n;i++)//记得是n-1,不然又塞爆了，要留位置'\0'
    {
	if(isspace(words[i]))
	    words[i]='\0';
    }
    words[n]='\0';
    puts(words);
    return 0;
}
