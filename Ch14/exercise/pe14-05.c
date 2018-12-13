#include <stdio.h>
#define NLEN 30		//Name Size
#define NSCO 3		//Numbers of score
#define CSIZE 4

struct name {
    char fname[NLEN];
    char lname[NLEN];
};

struct student {
    struct name handle;
    float grade[NSCO];
    float average;
};

int main(void)
{
    struct student marvel[CSIZE] = {
        { { "Peter", "Parker" },
          { 40, 40, 50 }
        },
        { { "Tony", "Stark" },
          { 60, 40, 50 }
        },
        { { "Steve", "Rogers" },
          { 40, 40, 30 }
        },
        { { "Thor", "Odinson" },
          { 30, 70, 60 }
        },
    };

    int count;
    int cou_gra;
    float all_average;

    for (count = 0; count < CSIZE; count++)
    {
        for (cou_gra = 0; cou_gra < NSCO; cou_gra++)
            marvel[count].average += marvel[count].grade[cou_gra];
        marvel[count].average = marvel[count].average / 3;
    }

    for (count = 0; count < CSIZE; count++)
    {
        cou_gra = 0;
        printf("\n%s %s\n", marvel[count].handle.fname,
               marvel[count].handle.lname);
        printf("Intelligence: %.2f\n", marvel[count].grade[cou_gra++]);
        printf("Power       : %.2f\n", marvel[count].grade[cou_gra++]);
        printf("Agility     : %.2f\n", marvel[count].grade[cou_gra]);
        printf("Average     : %.2f\n", marvel[count].average);
    }

    for (count = 0; count < CSIZE; count++)
    {
        for (cou_gra = 0; cou_gra < NSCO; cou_gra++)
            all_average += marvel[count].grade[cou_gra];
    }
    all_average = all_average / (NSCO * CSIZE);
    printf("\nAverage for avenger is %.2f\n", all_average);
    puts("Done!");

    return 0;
}
