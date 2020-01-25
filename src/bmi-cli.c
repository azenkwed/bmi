/* bmi-cli.c */
#include <stdio.h>
#include <stdlib.h>

#include "bmi.h"

#define SCANFERR "ERROR: invalid input."

/*
#define DUMP(varname)                                                         \
  fprintf (stderr, "--DEBUG: %s = %x\n", #varname, varname);
*/

typedef int bool_t;

int
main ()
{

  bool_t metrics = 0;
  int choice = 0;
  // -- short *age_ = 0;

  float weight = 0;
  float height = 0;

// char *buffer = NULL;
START:
  printf ("Do you want use the Imperial or the Metric system to input data?\n"
          "1. Imperial English\n"
          "2. Metrics [Default]\n>");
  if (scanf ("%d", &choice) != 1)
    fprintf (stderr, SCANFERR);

  metrics = choice;

  /* ask user for height */
  printf ("How tall are you?\n");
  if (scanf ("%f", &height) != 1)
    fprintf (stderr, SCANFERR);

  /* ask user for their weight */
  printf ("How much do you weigh?\n");
  if (scanf ("%f", &weight) != 1)
    fprintf (stderr, SCANFERR);

  /* perform calculation */
  double *bmi = (double *)malloc (sizeof (double));

  if (metrics == 1)
    {
      *bmi = (double)iebmi (weight, height);
      printf ("Your Body mass Index is %.2f\n", *bmi);
    }
  else if (metrics == 2 || metrics == 0x0A)
    {
      *bmi = (double)mbmi (weight, height);
      printf ("Your Body mass Index is %.2f\n", *bmi);
    }
  else
    {
      printf ("invalid choice: choose 1 or 2\n");
      goto START;
    }
  printf ("You are ");
  bmi_result (bmi);
  free (bmi);

  return 0;
}
