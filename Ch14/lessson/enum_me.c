#include <stdio.h>

enum nexttime {
    THU = 4, FRI, SAT, SUN
};

int main(void)
{
    enum nexttime po;
    for(po = THU; po <= SUN; po++)
    {
        printf("%d\n", po);
    }
   
    //printf("%s", po);	是无法显示po的枚举符
    return 0;
}

