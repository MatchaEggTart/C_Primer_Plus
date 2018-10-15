#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 40

int main(int argc, char * argv[])
{
    FILE * fa, * fb;
    int cha, chb;
    int i = -1;
    int a = 1;
    int b = 1;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file-a file-b\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fa = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fb = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    cha = getc(fa);
    chb = getc(fb);
    while (a == 1 || b == 1)
    {
        if (cha == EOF)
        {
            a = 0;
            i = 1;
        }
        if (chb == EOF)
        {
            b = 0;
            i = -1;
        }
        if (a == 1 && cha == '\n')
        {
            i = 1;
            if ((cha = getc(fa)) != EOF && b == 0)
                printf("\n");
        }
        if (a == 1 && i == -1)
        {
            putchar(cha);
            cha = getc(fa);
        }
        if (b == 1 && chb == '\n')
        {
            i = -1;
            if ((chb = getc(fb)) != EOF)
                printf("\n");
        }
        if (b == 1 && i == 1)
        {
            putchar(chb);
            chb = getc(fb);
        }
    }
    printf("\n");
    if ((fclose(fa) != 0) || (fclose(fb) != 0))
        fprintf(stderr, "Error in closing files\n");

    return 0;
}

/*
  if (cha == EOF && chb == '\n')
  i = 1;
  else if (chb == '\n')
  continue;
  else if (cha == '\n' && chb == EOF)
  i = -1;
  else if (cha == '\n')
  i = 1;


  while(cha != EOF && cha != '\n')
  {
  putchar(cha);
  cha = getc(fa);
  }
  if (cha != EOF)
  {
  cha = getc(fa);
  }
  if (cha == '\n' && chb == EOF)
  {
  printf("\n");
  cha = getc(fa);
  }
  while (chb != EOF && chb != '\n')
  {            
  putchar(chb);
  chb = getc(fb);
  }
  if (chb != EOF)
  {
  printf("\n");
  chb = getc(fb);
  }

*/
