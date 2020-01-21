#include <stdio.h>
#include <stdbool.h>

float eibmi (float *, float *); /* Imperial English BMI */
float mbmi (float *, float *);  /* Metri BMI */

int
main (int argc, char **argv)
{

  bool metrics = true;
  float bmi = 0.0;
  short age = 0;
  short height = 0;

  printf ("Do you want use the Imperial or the Metric system to input data?\n"
          "1. Imperial English\n"
          "2. Metrics [Default]\n");

  /* ask user for age */
  printf ("What is your age?\n");
  

  /* ask user for heigh in cm */
  printf ("What is your heigh?\n");

  printf ("You Body mass Index is %f\n", bmi);

  printf ("This is considered overweight. Time to hit the gym\n");

  return 0;
}

/*
 * Imperial English BMI Formula
 * weight (lbs) * 703 / height(in^2)
 */
float
eibmi (float *weight, float *height)
{
  return (*weight * (float)703) / (*height * *height);
}

/*
 * Metric BMI Formula
 * weight (kg) / height (m^2)
 */
float
mbmi (float *weight, float *height)
{
  return (*weight / (*height * *height));
}
