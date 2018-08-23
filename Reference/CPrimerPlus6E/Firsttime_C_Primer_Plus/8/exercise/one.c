#include<stdio.h>
int main(void)
{
	int chara,ch;
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
		if((ch!='\n')&&(ch!=' '))
			chara++;
	}
	printf("\nHow many charater>\n%d\nDone!\n",chara);
	return 0;
}
