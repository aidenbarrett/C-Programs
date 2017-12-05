//
//  main.c
//  Lab 7 Problem 1
//  Aiden Barrett
//  B00075033
//  A program that calculates the volume and mass of a steel cylinder.
//

#include <stdio.h>
#include <stdlib.h>
#define DENSITY 2400 // Symbolic constant DENSITY with value of 2400


int main()

{

    float height;

    float diameter;


    printf ("Please enter cylinder height and diameter in metres:\n");

    scanf ("%f%f", &height, &diameter);


    float volume = 3.14*((diameter/2)*(diameter/2))*height; // Calculates volume

    float mass = DENSITY * volume; // Calculates mass


    printf ("Volume of Cylinder: %.2f cubic meters\n", volume); // Outputs volume value

    printf ("Mass of Cylinder: %.2fkg\n", mass); // Outputs mass value

    return 0;
}
