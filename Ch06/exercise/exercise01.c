#include <stdio.h>
#define SIZE 26

int main(void)
{
    char chara[SIZE];
    int char_num;

    for (char_num = 0; char_num < SIZE;
         char_num++)
    {
        chara[char_num] = 'a' + char_num;
        printf("%c ", chara[char_num]);
    }
    printf("\n");
    
    return 0;
}
