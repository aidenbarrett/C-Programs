//
//  main.c
//  Lab 4 Problem 2
//  Aiden Barrett
//  B00075033
//  A program to calculate how tall a building is by counting the time it takes for a stone to fall from the top of the building to the ground.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float t1, t2, t3;

    printf ("Please enter time, T1, in secs: ");

    scanf ("%f", &t1);

    printf ("Please enter time, T2, in secs: ");

    scanf ("%f", &t2);

    printf ("Please enter time, T3, in secs: ");

    scanf ("%f", &t3);

    float average = (t1 + t2 + t3)/3; // calculates average time

    float h = 0.5*(9.81*(average*average)); // calculates height

    printf ("\n\nHeight: %.2fm\n", h); // outputs height value in meters

    return 0;

}
