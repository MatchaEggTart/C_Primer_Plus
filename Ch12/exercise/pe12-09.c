#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81

int main(void)
{
    char *words;
    char **ptd;
    int n, i;

    printf("How many words do you wish to enter? ");
    scanf("%d", &n);
    printf("Enter %d words now:\n", n);
    words = (char *) malloc(SIZE * sizeof(char));
    ptd = (char **) malloc(n * sizeof(char *));

    for (i = 0; i < n; i++)
    {
	scanf("%s", words);
	int word_length= strlen(words);
	ptd[i] = (char *)malloc(word_length + 1);
	strcpy(ptd[i], words);
    }

    printf("Here are your words:\n");
    for (i = 0; i < n; i++)
    {
	printf("%s\n", ptd[i]);
    }
    if (ptd[0][1] == '\0')
        printf("\nYes\n");

    for (i = 0; i < n; i++)
    {
	free(ptd[i]);
    }

    return 0;
}
