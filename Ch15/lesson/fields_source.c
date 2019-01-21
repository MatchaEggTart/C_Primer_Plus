#include <stdio.h>
#include <stdbool.h>

#define SOLID	0
#define DOTTED	1
#define DASHED	2

#define BLUE	4
#define GREEN	2
#define RED	1

#define BLACK	0
#define YELLOW	(RED | GREEN)
#define MAGENTA	(RED | BLUE)
#define CYAN	(GREEN | BLUE)
#define WHITE	(RED | GREEN | BLUE)

const char * colors[8] = { "black", "red", "green", "yellow",
                           "blue", "megenta", "cyan", "white" };

struct box_props {
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4;
    bool show_border : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int : 2;
};

void show_settings(const struct box_props * pb);

int main(void)
{
    struct box_props box = { true, YELLOW, true, GREEN, DASHED };

    printf("Original box settings:\n");
    show_settings(&box);

    box.opaque = false;
    box.fill_color = WHITE;
}
