#include "bmi.h"
#include <stdio.h>

/*
 * Imperial English BMI Formula
 * weight (lbs) * 703 / height(in^2)
 */
float
iebmi (float weight, float height)
{
  float imp_result = (weight * 703) / (height * height * 144);
  return imp_result;
}

/*
 * Metric BMI Formula
 * weight (kg) / height (m^2)
 */
float
mbmi (float weight, float height)
{
  float metrics_result = (weight / ((height / 100) * (height / 100)));
  return metrics_result;
}

/*
 * Recommend function
 * returns a recommendation based on your BMI result
 */
void
bmi_result (double *bmi)
{
  if (*bmi < 15.0)
    printf ("very severely underweight\n");
  else if (*bmi >= 15.0 && *bmi <= 16.0)
    printf ("severely underweight\n");
  else if (*bmi > 16.0 && *bmi <= 18.5)
    printf ("underweight\n");
  else if (*bmi > 18.5 && *bmi <= 25.0)
    printf ("normal (healthy weight)\n");
  else if (*bmi > 25.0 && *bmi <= 30.0)
    printf ("overweight\n");
  else if (*bmi > 30.0 && *bmi <= 35.0)
    printf ("obese Class I (Moderately obese)\n");
  else if (*bmi > 35.0 && *bmi <= 40.0)
    printf ("obese Class II (Severely obese)\n");
  else if (*bmi > 40.0 && *bmi <= 45.0)
    printf ("obese Class III (Very severely obese)\n");
  else if (*bmi > 45.0 && *bmi <= 50.0)
    printf ("obese Class IV (Morbidly obese)\n");
  else if (*bmi > 50.0 && *bmi <= 60.0)
    printf ("obese Class V (Super obese) \n");
  else if (*bmi > 60.0 && *bmi <= 100)
    printf ("obese Class VI (Hyper obese)\n");
  else
    printf (" problably not human.\n");
}
