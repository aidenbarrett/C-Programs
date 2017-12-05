//
//  main.c
//  Lab 3 Problem 2
//  Aiden Barrett B00075033
//  BMI Calculator with Weight Categories


#include <stdio.h>

int main()
{
    float bmi, weight, height;

    printf("Please enter your height (in meters):\n");
    scanf("%f", &height);

    printf("You entered %.2f.Meters\n\n", height);
    printf("Please enter your weight (in Kg):\n");

    scanf("%f", &weight);
    printf("You entered %.1f.Kg\n\n", weight);

    bmi = (weight)/(height * height); // Calculates BMI
    printf("Your Body Mass Index is: %.2f (kg/m2)\n\n", bmi);

    if (bmi < 18.5) // Less than 18.5Kg
    {
        printf("You have a BMI of %0.1f and your weight status is Underweight.\n", bmi);
    }
    if (bmi >= 18.5 && bmi < 25.0) { // && means logical AND. Between 18.5 and 24.5 Kg/m2

        printf("You have a BMI of %0.1f and your weight status is Normal.\n", bmi);
    }
    if (bmi >= 25.0 && bmi < 30.0) { // Between 25 and 29.9 Kg/m2

        printf("You have a BMI of %0.1f and your weight status is Overweight.\n", bmi);
    }
    if (bmi >= 30.0) { // Over 30 Kg/m2

        printf("You have a BMI of %0.1f and your weight status is Obese.\n", bmi);
    }



    return 0;
}
