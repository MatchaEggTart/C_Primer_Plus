#include <stdio.h>

struct rect {
    double x;
    double y;
};

double rect_area(struct rect r);

double rect_area(struct rect r)
{
    return r.x * r.y;
};

int main(void)
{
    double area;
    area = rect_area( (struct rect) {
            10.5,
            20.0 }  );
    printf("%.2lf\n", area);

    return 0;
}
