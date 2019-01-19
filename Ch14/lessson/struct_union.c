#include <stdio.h>

int main(void)
{
    struct choice_a {
        double data_a;
    };

    struct choice_b {
        double data_b;
    };

    struct as {
        int status;
        union {
            struct choice_a key_a;
            struct choice_b key_b;
        };
    };

    struct as data;
    data.status = 1;
    data.key_a.data_a = 12;
    data.key_b.data_b = 14;

    printf("status = 1\n");
    printf("%lf\n", data.key_a.data_a);
    printf("%lf\n", data.key_b.data_b);

    data.status = 0;
    data.key_b.data_b = 13;
    printf("\nstatus = 0\n");
    printf("%lf\n", data.key_a.data_a);
    printf("%lf\n", data.key_b.data_b);

    return 0;
}
