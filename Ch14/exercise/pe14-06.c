#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define NLEN 30
#define DATA_SIZE 100
#define FLEN 30
#define NPLAYER 19
char * s_gets(char * st, int n);
void eatline(void);

struct softball {
    int player_number;
    char fname[NLEN];
    char lname[NLEN];
    int play_times;
    int hit_times;
    int run_bar_times;
    int rbi;
};

int main(int argc, char * argv [])
{
    struct softball data[DATA_SIZE];
    struct softball temp;
    FILE * fp;
    char filename[FLEN];
    char option;
    int size = sizeof (struct softball);	//count the size of struct for fileread
    int count = 0;
    int number;
    int index, filecount;
    bool find_number = false;
    bool begin_write = false;

    int find_name;
    int all_play_times = 0;
    int all_hit_times = 0;
    int all_run_bar_times = 0;
    int all_rbi = 0;
    double all_hit_rate = 0.00;
    
    if (argc != 3 && argv[1][0] != '-')
    {
        fprintf(stderr, "Usage: %s -[options] filename.\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    switch (argv[1][1])
    {
        case 'r' : {
            if ((fp = fopen(argv[2], "r")) == NULL)
            {
                fprintf(stderr, "Can't open the file %s\n", argv[2]);
                exit(EXIT_FAILURE);
            }
            break;
        }
        case 'w' : {
            if ((fp = fopen(argv[2], "a+")) == NULL)
            {
                fprintf(stderr, "Can't open the file %s\n", argv[2]);
                exit(EXIT_FAILURE);
            }
            begin_write = true;

            break;
        }
        default : {
            fprintf(stderr, "option -r for read\noption -w for write\n");
            exit(EXIT_FAILURE);
        }
    }
    while (count < DATA_SIZE && (fread(&data[count], size, 1, fp) == 1))
    {
        if (count == 0)
            fprintf(stdout, "Current contents of %s:\n", argv[2]);
        printf("%2d %10s %-10s %2d %2d %2d %2d\n",
               data[count].player_number, data[count].fname, data[count].lname,
               data[count].play_times, data[count].hit_times, data[count].run_bar_times,
               data[count].rbi);
        count++;
    }
    printf("count = %d\n", count);
    filecount = count;
    if (count == DATA_SIZE)
    {
        fputs("The file is full", stderr);
        exit(2);
    }
    if (begin_write)
    {
        puts("Please enter a player's number.");
        if (count < DATA_SIZE && scanf("%d", &number) == 1
            && number < NPLAYER)
        {
            eatline();
            for (index = 0; index < count; index++)
            {
                if (number == data[index].player_number)
                {
                    find_number = true;
                    break;
                }
            }
            if (find_number)
            {
                strcpy(data[count].fname, data[index].fname);
                strcpy(data[count].lname, data[index].lname);
                printf("N.%2d is exist\nName is %s %s", data[index].player_number,
                       data[count].fname, data[count].lname);
            }
            else
            {
                puts("This is a new player.");
                puts("Enter the first name:");
                s_gets(data[count].fname, NLEN);
                puts("Enter the last name:");
                s_gets(data[count].lname, NLEN);
            }
            data[count].player_number = number;
            puts("Enter the play times");
            scanf("%d", &data[count].play_times);
            eatline();
            puts("Enter the hit times");
            scanf("%d", &data[count].hit_times);
            eatline();
            printf("The wrong number is %d", data[count].hit_times);
            puts("Enter the run bar times");
            scanf("%d", &data[count].run_bar_times);
            eatline();
            puts("Enter the RBI");
            scanf("%d", &data[count].rbi);
            eatline();
            //            data[count].hit_rate = data[count].hit_times / data[count].play_times;
            count++;
        }
        if (count > 0)
        {
            puts("Here is the new data:");
            for (index = 0; index < count; index++)
                printf("%2d %10s %-10s %2d %2d %2d %2d\n",
                       data[index].player_number, data[index].fname, data[index].lname,
                       data[index].play_times, data[index].hit_times, data[index].run_bar_times,
                       data[index].rbi);

            fwrite(&data[filecount], size, count - filecount, fp);
        }
        else
            puts("Nothing\n");
    }
    find_number = false;
    puts("Whice one's averger you want to know\nEnter his number");
    scanf("%d", &number);
    eatline();
    for (index = 0; index < count; index++)
    {
        if (number == data[index].player_number)
        {
            find_number = true;
            find_name = index;
            break;
        }
    }
        
    if (find_number)
    {
        for (index = 0; index < count; index++)
        {
            if (number == data[index].player_number)
            {
                all_play_times += data[index].play_times;
                all_hit_times += data[index].hit_times;
                printf("all_hit_times is %d\n,data[index].hit_times is %d\n",
                       all_hit_times, data[index].hit_times);
                all_run_bar_times += data[index].run_bar_times;
                all_rbi += data[index].rbi;
            }
        }
        all_hit_rate = (double)all_hit_times / (double)all_play_times;
        printf("%2d %10s %-10s %2d %2d %2d %2d\nThe hit_rate is %.3lf",
               data[find_name].player_number, data[find_name].fname,
               data[find_name].lname, all_play_times,
               all_hit_times, all_run_bar_times, all_rbi, all_hit_rate);

    }
    else
        puts("We can't fine this number");
    puts("\nBye");
    fclose(fp);
    
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            * find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}
    
/*
  printf("\nEnter the player number:");
  if (scanf("%d", &number) != 1 && number >=NPLAYER && number < 0)
  {
  fprintf(stderr, "Number is wrong\n");
  exit(EXIT_FAILURE);
  }
  while (getchar() != '\n')
  continue;
*/    
    


/*
  while (count < DATA_SIZE && fread(&data[count], size, 1, fp) == 1)
  {
  if (count == 0)
  printf("Current contents of %s:", argv[2]);
  printf("%2d %10s %-10s %d %d %d %lf\n",
  data[count].player_number, data[count].fname, data[count].lname,
  data[count].games, data[count].hit_times, data[count].run_bar_times,
  data[count].hit_rate);
  count++;
  }
  filecount = count;
  if (count == DATA_SIZE)
  {
  fprintf(stderr, "The %s is full.\n", argv[2]);
  exit(2);
  }
  puts("Please add a new game's data. Player's number");
  puts("Press [enter] at the start of a line to stop.");
  while (count < [DATA_SIZE] && scanf("%d", &number) == 1
  && number <= NPLAYER && number >= 0)
  {
  puts("Enter the first name:");
  s_gets(data[count].fname, NLEN);
  puts("Enter the last name:");
  s_gets(data[count].lname, NLEN);
  for (loop = 0; loop <= count; loop++)
  {
  if (number == data[count].player_number)
  {
  find_number = true;
  break;
  }
  }
  if (find_number)
  {
  if (strcmp(data[count].fname, data[loop].fname) != 0
  && strcmp(data[count].lname, data[loop].lname) != 0)
  {
  fprintf(stderr, "The name is wrong.\nN.%2d is %s %s", data[count].player_number,
  data[count].fname, data[count].lname);
  puts("Please add a new game's data. Player's number");
  continue;
  }
  }
  else
  puts("This is a new player.");
  puts("Enter the play times");
  scanf("%d", data[count].play_times);
  puts("Enter the hit times");
  scanf("%d", data[count].hit_times);
  puts("Enter the run bar times");
  scanf("%d", data[count].run_bar_times);
  puts("Enter the ")
  }
*/

/*    rewind(fp);		//go to head of file
      while (count <= NPLAYER && fread(&data[count], size, 1, fp) == 1)
      {
      if (count == 0)
      fprintf(stdout, "Current contents of %s.\n", argv[2]);
      printf("%2d %10s %-10s %d %d %d %lf\n",
      data[count].player_number, data[count].fname, data[count].lname,
      data[count].play_times, data[count].hit_times, data[count].run_bar_times,
      data[count].hit_rate);
      count++;
      }
      filecount = count;
      if (argv[1][1] == 'w')
      {
      puts("Enter the player number");
      if (scanf("%d", &number) == 1 && number <= NPLAYER && number >= 0)
      {
      while (getchar() != '\n')
      continue;
      for (loop = 0; loop <= count; loop++)
      {
      if (count > 0 && number == data[loop].player_number)
      {
      number_exist = true;
      break;
      }
      }
      }
      if (number_exist)
      {
      temp = data[loop];
      printf("The player's data is exist\n"
      "%d)%s %s\n", data[loop].player_number,
      data[loop].fname, data[loop].lname);
      puts("Enter the play times");
      scanf("%d", &data[loop].play_times);
      data[loop].play_times += temp.play_times;
      puts("Enter the hit times");
      scanf("%d", &data[loop].hit_times);
      data[loop].hit_times += temp.hit_times;
      puts("Enter the run bar times");
      scanf("%d", &data[loop].run_bar_times);
      data[loop].run_bar_times += temp.run_bar_times;
      puts("Enter the RBI");
      scanf("%d", &data[loop].rbi);
      data[loop].rbi += temp.rbi;
      fwrite(&data[loop], size, 1, fp);
      }
      else
      {
      data[count].player_number = number;
      puts("This is a new player.");
      count++;
      puts("Enter the first name:");
      s_gets(data[count].fname, NLEN);
      puts("Enter the last name:");
      s_gets(data[count].lname, NLEN);
      printf("The player's data is exist\n"
      "%d)%s %s\n", data[count].player_number,
      data[count].fname, data[count].lname);
      puts("Enter the play times");
      scanf("%d", &data[count].play_times);
      puts("Enter the hit times");
      scanf("%d", &data[count].hit_times);
      puts("Enter the run bar times");
      scanf("%d", &data[count].run_bar_times);
      puts("Enter the RBI");
      scanf("%d", &data[count].rbi);
      fwrite(&data[count], size, 1, fp);
      }
      }
*/
/*            if (count > NPLAYER)
              {
              fputs("The data is full.", stderr);
              exit(2);
              }
              }
              if (count > 0)
              {
              puts("Here is the new data");
              for (index = 0; index < count; index++)
              printf("%2d %10s %10s %d %d %d %lf\n",
              data[count].player_number, data[count].fname, data[count].lname,
              data[count].play_times, data[count].hit_times, data[count].run_bar_times,
              data[count].hit_rate);
              fwrite(&data[0], size, count, fp);

              }
              else
              puts("No data update.\n");
              }
*/
