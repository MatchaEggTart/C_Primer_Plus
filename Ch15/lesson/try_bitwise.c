#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define HANSEN  0x1
#define YELLOW  0x2
#define BLACK   0x4
#define WHITE   0x8
#define RED     (YELLOW | BLACK)    //3
#define GREEN   (YELLOW | WHITE)    //5 
#define NONE    0
#define SKIN_MASK   0xE
#define HAIR_MASK   0x70
#define HAIR_LONG   0x80

const char * colors[6] = { "none", "yellow", "black", "red", "white", "green" };

void show_feature(unsigned short);

char * itobs(int , char *);

int main(void)
{
    unsigned short zhang;
    char bin_str[CHAR_BIT * sizeof(int) + 1];   //bin_str[32] = '\0'

    zhang |= HANSEN;
    zhang |= YELLOW;
    zhang |= ((YELLOW | WHITE) << 3);
    zhang |= HAIR_LONG;

    show_feature(zhang);

    printf("Source is\n %s\n", itobs(zhang, bin_str));

    printf("\n\nChange>>>>\n\n\n");

    zhang &= ~SKIN_MASK;
    zhang |= (GREEN ^ YELLOW);
    zhang &= ~HAIR_MASK;
    zhang |= (RED << 3);
    zhang ^= HAIR_LONG;

    show_feature(zhang);

    printf("Target is\n %s\n", itobs(zhang, bin_str));

    return 0;
}

void show_feature(unsigned short us)
{
    printf("Is he hansen?\n");
    printf("%s\n",
        (us & HANSEN) == HANSEN ? "Yes." : "No.");
    printf("The skin color is %s\n",
        colors[(us >> 1) & 07]);
    printf("Is his hair long?\n");
    printf("%s\n",
        (us & HAIR_LONG) == HAIR_LONG ? "Yes." : "No.");
    printf("His hair is %s\n", colors[(us >> 4) & 07]);
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)        //begin for bin_str[31] to bin_str[0]
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}