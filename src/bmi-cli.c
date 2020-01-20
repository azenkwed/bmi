#include <stdio.h>

float eibmi (float *, float *); /* Imperial English BMI */
float mbmi (float *, float *);  /* Metri BMI */

int
main (int argc, char **argv)
{

  float bmi = 0.0;
  short age = 0;
  short height = 0;

  /* ask user for age */
  printf ("Waht is your age?\n");

  /* ask user for heigh in cm */
  printf ("What is your heigh? (cm)\n");

  printf ("You Body mass Index is %f", bmi);

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
