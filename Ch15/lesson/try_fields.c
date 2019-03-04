#include <stdio.h>
#include <stdbool.h>

#define YELLOW  1
#define BLACK   2
#define WHITE   4

#define RED     (YELLOW | BLACK)    //3
#define GREEN   (YELLOW | WHITE)    //5 
#define NONE    0

const char * colors[6] = { "none", "yellow", "black", "red", "white", "green" };

struct feature
{
    bool hansen             : 1;
    unsigned int skin_color : 3;
    unsigned int hair_color : 3;
    bool hair_long          : 1;
};

void show_feature(const struct feature * pb);

int main(void)
{
    struct feature zhang = { true, YELLOW, GREEN, false };
    
    show_feature(&zhang);

    return 0;
}

void show_feature(const struct feature * pb)
{
    printf("Is he hansen?\n");
    printf("%s\n",
        pb->hansen == true ? "Yes." : "No.");
    printf("The skin color is %s\n",
        colors[pb->skin_color]);
    printf("Is his hair long?\n");
    printf("%s\n",
        pb->hair_long == true ? "Yes." : "No");
    printf("His hair is %s\n", colors[pb->hair_color]);
}