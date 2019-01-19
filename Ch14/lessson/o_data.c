#include <stdio.h>

struct xyz {
    int a;
    char b;
    int c;
};

int main(void)
{
    struct xyz o_data[3] =
    {
        { 2, 'c', 5 },
        { 1, 'b', 3 },
        { 7, 'e', 2 }
    };
    struct xyz n_data[3];

    n_data[1] = o_data[0];

    printf("ndata:\n");
    printf("%d %c %d\n", n_data[1].a, n_data[1].b, n_data[1].c);

    return 0;
}

/*
    struct xyz o_data;// = { 1, 'b', 3 };
    o_data.a = 1;
    o_data.b = 'b';
    o_data.c = 3;
    int a;
            //            {

                //                { 2, 'c', 5 },
                //                { 7, 'e', 2 }
            //            };
    //    struct xyz n_data[3];

    //n_data = o_data;		error

    struct xyz n_data = o_data;
    fflush(stdout);
    printf("odata:\n");
    //    printf("%d %c %d\n", o_data.a, o_data.b, o_data.c);
    //    printf("%d %c %d\n", n_data.a, n_data.b);//, n_data.c);
    //    printf("%d", o_data.c);
    printf("%d\n", a);
    //    printf("%d", n_data.c);
    /*
    printf("%d %c %d", n_data[0].a, n_data[0].b, n_data[0].c);
    printf("%d %c %d", n_data[1].a, n_data[1].b, n_data[1].c);
    printf("%d %c %d", n_data[2].a, n_data[2].b, n_data[2].c);
    */

