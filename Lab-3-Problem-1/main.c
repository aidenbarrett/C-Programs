
//
//  main.c
//  Lab 3 Problem 1
//  Aiden Barrett
//  B00075033
//  BMI calculator


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bmi, weight, height;

    printf("Please enter your height (in meters):\n");
    scanf("%f", &height);

    printf("You entered %.2f.Meters\n\n", height);
    printf("Please enter your weight (in Kg):\n");

    scanf("%f", &weight);
    printf("You entered %.2f.Kg\n\n", weight);

    bmi = (weight)/(height * height); // Calculates BMI
    printf("Your Body Mass Index is: %.2f (kg/m2)\n\n", bmi);



    return 0;
}
