/* bmi-cli.c */

#include <stdio.h>
#include "bmi.h"

#define SCANFERR "ERROR: scanf invalid input."

typedef int bool_t;

int main()
{
  bool_t metrics = 0;
  // short age = 0;
  short weight = 0;
  short height = 0;

  // char *buffer = NULL;
START:
  printf("Do you want use the Imperial or the Metric system to input data?\n"
         "1. Imperial English\n"
         "2. Metrics [Default]\n>");
  if (scanf("%d", &metrics) != 1)
    fprintf(stderr, SCANFERR);

  /* ask user for height */
  printf("How tall are you?\n");
  if (scanf("%hi", &height) != 1)
    fprintf(stderr, SCANFERR);

  /* ask user for their weight */
  printf("How much do you weigh?\n");
  if (scanf("%hi", &weight) != 1)
    fprintf(stderr, SCANFERR);

  /* perform calculation */
  if (metrics == 1)
  {
    eibmi((float)weight, (float)height);
    printf("Your Body mass Index is %f\n", eibmi);
  }
  else if (metrics == 2 || metrics == 0x0A)
  {
    mbmi((float)weight, (float)height);
    printf("Your Body mass Index is %f\n", mbmi);
  }
  else
  {
    printf("invalid choice: choose 1 or 2\n");
    goto START;
  }

  printf("This is considered overweight. Time to hit the gym\n");

  return 0;
}
