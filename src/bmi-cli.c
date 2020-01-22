#include <stdio.h>

typedef int bool_t;

float eibmi (float , float ); /* Imperial English BMI */
float mbmi (float , float );  /* Metri BMI */

int
main ()
{

  bool_t metrics = 0;
  float bmi = 0.0;
  short age = 0;
  short weight = 0;
  short height = 0;

  // char *buffer = NULL;
  
START: printf ("Do you want use the Imperial or the Metric system to input data?\n"
          "1. Imperial English\n"
          "2. Metrics [Default]\n>");
  scanf ("%d", &metrics);
  
  /* ask user for age */
  printf ("What is your age?\n");
  scanf ("%hi", &age);
  
  /* ask user for height */
  printf ("How tall are you?\n");
  scanf ("%hi", &height);

  /* ask user for heigh in cm */
  printf ("What is your heigh?\n");
  scanf ("%hi", &height);
	
  /* perform calculation */
  if (metrics == 1)
    {
      eibmi ((float)weight, (float)height);
    }
  else if (metrics == 2 || metrics == 0x0A)
    {
      mbmi ((float)weight, (float)height);
    }
  else
    {
      printf ("invalid choice: choose 1 or 2\n");
      goto START;
    }

  printf ("You Body mass Index is %f\n", bmi);

  printf ("This is considered overweight. Time to hit the gym\n");

  return 0;
}

/*
 * Imperial English BMI Formula
 * weight (lbs) * 703 / height(in^2)
 */
float
eibmi (float weight, float height)
{

  return (weight * (float)703) / (height * height);
}

/*
 * Metric BMI Formula
 * weight (kg) / height (m^2)
 */
float
mbmi (float weight, float height)
{
  return (weight / (height * height));
}
