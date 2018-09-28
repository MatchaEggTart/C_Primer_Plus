#include <stdio.h>

int main(void)
{
    float file_size, speed_net;
    
    printf("What's the speed(megabits) par second for your internet?\n");
    scanf("%f", &speed_net);
    printf("What's the size for your file(megabits)?\n");
    scanf("%f", &file_size);
    printf("At %.2f megabits per second, a file of %.2f megabits\ndo"
           "wnloads in %.2f seconds.\n\n", speed_net, file_size, file_size / speed_net);

    return 0;
}
