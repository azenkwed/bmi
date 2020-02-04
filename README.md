# BMI - The Body mass index calculator

This program allow the user to calculate their Body Mass Index.

| Category                              | BMI (kg/m2) |      | BMI Prime |      |
| ------------------------------------- | ----------- | ---- | --------- | ---- |
|                                       | from        | to   | from      | to   |
| Very severely underweight             |             | 15   |           | 0.60 |
| Severely underweight                  | 15          | 16   | 0.60      | 0.64 |
| Underweight                           | 16          | 18.5 | 0.64      | 0.74 |
| **Normal (healthy weight)**           | 18.5        | 25   | 0.74      | 1.0  |
| Overweight                            | 25          | 30   | 1.0       | 1.2  |
| Obese Class I (Moderately obese)      | 30          | 35   | 1.2       | 1.4  |
| Obese Class II (Severely obese)       | 35          | 40   | 1.4       | 1.6  |
| Obese Class III (Very severely obese) | 40          | 45   | 1.6       | 1.8  |
| Obese Class IV (Morbidly obese)       | 45          | 50   | 1.8       | 2    |
| Obese Class V (Super obese)           | 50          | 60   | 2         | 2.4  |
| Obese Class VI (Hyper obese)          | 60          |      | 2.4       |      |

## Howto

Run bmi-cli to calculate your body mass index:

```bash
bash$ ./bmi-cli
```

## Pseudocode

```c
START: the program starts
input := NULL
metric := NULL
weight := NULL
height := NULL

DO
    PRINT: Do you want to use the metrics system? [Y/n]
    READ: input

    IF input = y or input = Y or input = <ENTER KEY>
        metrics := true

    ELSE IF input = N or input = n
        metric = false
    ELSE
        PRINT: Wrong value. Try again.
WHILE metric = NULL

/* at this point metric is either true or false */

DO
    test := false
    IF metric = true
        PRINT: What is your weight (kg)?
        READ: weight
        test := CALL: test_weight(weigth, metric = true)
    ELSE
        PRINT: What is your weight (lbs)?
        READ: float weight
        test := CALL: test_weight(weigth, metric = false)

WHILE test != true

/*  at this point weight is a float number */

DO
    test := false
    IF metric = true
        PRINT: How tall are you (in cm, e.g 183)?
        READ: height
        test := CALL: test_height(height, metric = true)
    ELSE
        PRINT: How tall are you (e.g. 6.3 for 6 ft 3 in)?
        READ: height
        test := CALL: test_height(heigth, metric = false)
WHILE test != true

/* at this point height is a float number  */

result := NULL
IF metric = true
    CALL: mbmi
    result := CALL: bmi_result
ELSE
    CALL: eibmi
    result := CALL: bmi_result



PRINT: result

END: Program ends

/* Function */

FUNCTION test_weight(float weight, bool metric)
    IF weight IS NOT a number
        return false

    IF metric = true
        IF weight 2.1kg < OR weight > 635kg
            return false
        ELSE
            return false
    ELSE IF metric = false
        IF weight < 4.7lbs OR weight > 1,400lbs
            return false
        ELSE
            return true
ENDFUNCTION

FUNCTION test_height(float height, bool metric)
    IF height IS NOT a number
        return false

    IF metric = true
        IF height 54.6cm < OR height > 272cm
            return false
        ELSE
            retrun true

    ELSE IF metric = false
        IF height < 21.5 in OR height > 8ft 11.1 in
            return false
        ELSE
            return true
    ELSE
        return false
ENDFUNCTION


/* calculate bmi with imperial english system */
FUNCTION iebmi (float weight, float height)
    PROCESSING
        float result = (weight * 703) / (height * height * 144)
    RETURN: result
ENDFUNCTION

/* calculate bmi with metric system */
FUNCTION mbmi (float weight, float height)
    PROCESSING
        float result = (weight / ((height / 100) * (height / 100)))
    RETURN: result
ENFUNCTION

```
