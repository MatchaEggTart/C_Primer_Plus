#include<stdio.h>
int main(void)
{
	int guess=50,max=100,min=1;
	char response;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Un...bigger than %d or smaller than %d"
			"?(input 'b' is bigger, input 's' "
			"is smaller.\n",guess,guess);
	while((response=getchar())!='y')
	{
		if(response=='b'||response=='s')
		{
			if(response=='b')
			{
				max=guess;
				guess=(max+min)/2;
				printf("%d bigger or small or yes?\n",guess);
			}
			if(response=='s')
			{				
				min=guess;
				guess=(max+min)/2;
				printf("%d bigger or small? or yes\n",guess);
			}
		}
		else
			printf("Sorry, I underestand only y or b or s.\n");
		while(getchar()!='\n')
			continue;
	}
	printf("I knew I could do it!\n");
	return 0;
}
