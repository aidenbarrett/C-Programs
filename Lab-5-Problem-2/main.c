//
//  main.c
//  Lab 5 Problem 2
//  Aiden Barrett
//  B00075033
//  A program to calculate the total resistance of a set of resistors in both parallel and in series.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float r1, r2, r3;

    printf("Please enter resistor value for R1:\n");

    scanf ("%f", &r1); // takes in r1 value from user

    printf("Please enter resistor value for R2:\n");

    scanf ("%f", &r2); // takes in r2 value from user

    printf("Please enter resistor value for R3:\n");

    scanf ("%f", &r3); // takes in r3 value from user


    float rp = 1/((1/r1) + (1/r2) + (1/r3)); // calculates total parallel resistance

    float rs = r1 + r2 + r3; // calculates total series resistance


    printf ("\nTotal parallel resistance: %.2fohms\n", rp); // outputs value of total parallel resistance

    printf ("Total series resistance: %.2fohms\n", rs); // outputs value of total series resistance

    return 0;

}
