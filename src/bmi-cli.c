/* bmi-cli.c */

#include <stdio.h>

#define SCANFERR "ERROR: scanf invalid input."

typedef int bool_t;


float eibmi (float , float );	/* Imperial English BMI */
float mbmi (float , float );	/* Metri BMI */
void bmi_result(float);		/* the result */

int
main ()
{

  bool_t metrics = 0;
  // short age = 0;
  short weight = 0;
  short height = 0;

  // char *buffer = NULL; 
START: printf ("Do you want use the Imperial or the Metric system to input data?\n"
          "1. Imperial English\n"
          "2. Metrics [Default]\n>");
  if (scanf ("%d", &metrics) != 1)
    fprintf (stderr, SCANFERR);

  /* ask user for height */
  printf ("How tall are you?\n");
  if (scanf ("%hi", &height) != 1)
    fprintf (stderr, SCANFERR);

  /* ask user for their weight */
  printf ("How much do you weigh?\n");
  if (scanf ("%hi", &weight) != 1)
    fprintf (stderr, SCANFERR);
	
  /* perform calculation */
  if (metrics == 1)
    {
      eibmi ((float)weight, (float)height);
      printf ("Your Body mass Index is %f\n", eibmi);
    }
  else if (metrics == 2 || metrics == 0x0A)
    {
      mbmi ((float)weight, (float)height);
      printf ("Your Body mass Index is %f\n", mbmi);
    }
  else
    {
      printf ("invalid choice: choose 1 or 2\n");
      goto START;
    }


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
  float result = (weight * (float)703) / (height * height);
  return (float)result;
}

/*
 * Metric BMI Formula
 * weight (kg) / height (m^2)
 */
float
mbmi (float weight, float height)
{
  float result = (weight / (height * height));
  return (float)result;
}

/*
 * Recommend function
 * returns a recommendation based on your BMI result
 */
void
bmi_result (float bmi)
{
  if (bmi < 15.0)
    printf ("Very severely underweight\n");
  else if (bmi >= 15.0 && bmi <= 16.0)
    printf ("Severely underweight\n");
  else if (bmi > 16.0 && bmi <= 18.5)
    printf ("underweight\n");
  else if (bmi > 18.5 && bmi <= 25.0)
    printf ("Normal (healthy weight)\n");
  else if (bmi > 25.0 && bmi <= 30.0)
    printf ("Overweight\n");
  else if (bmi > 30.0 && bmi <= 35.0)
    printf ("Obese Class I (Moderately obese)\n");
  else if (bmi > 35.0 && bmi <= 40.0)
    printf ("Obese Class II (Severely obese)\n");
  else if (bmi > 40.0 && bmi <= 45.0)
    printf ("Obese Class III (Very severely obese)\n");
  else if (bmi > 45.0 && bmi <= 50.0)
    printf ("Obese Class IV (Morbidly obese)\n");
  else if (bmi > 50.0 && bmi <= 60.0)
    printf ("Obese Class V (Super obese) \n");
  else if (bmi > 60.0)
    printf ("Obese Class VI (Hyper obese)\n");
  else
    printf ("Arre you human?\n");
}
/* 
Category				BMI (kg/m2)	BMI Prime
					from	to	from	to

Very severely underweight			15		0.60
Severely underweight			15	16	0.60	0.64
Underweight				16	18.5	0.64	0.74
Normal (healthy weight)			18.5	25	0.74	1.0
Overweight				25	30	1.0	1.2
Obese Class I (Moderately obese)	30	35	1.2	1.4
Obese Class II (Severely obese)		35	40	1.4	1.6
Obese Class III (Very severely obese)	40	45	1.6	1.8
Obese Class IV (Morbidly obese)		45	50	1.8	2
Obese Class V (Super obese)		50	60	2	2.4
Obese Class VI (Hyper obese)		60		2.4	
*/
