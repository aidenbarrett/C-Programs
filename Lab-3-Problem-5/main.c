//
//  main.c
//  Lab 3 Problem 5
//  Aiden Barrett
//  B00075033
//  A program that creates a table of engineering properties.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("Dimensions(cm):\t\tCS area:\tMOI:\t\tSM:\n\n"); // Prints table headings.

    float base, height; // Declares floats base and height.

    for (base = 2; base <=10; base+=2) // This for loop counts through base sizes in increments of 2.
    {
        for (height = 2; height <= 12; height+=2) // This for loop counts through height sizes in increments 2.
        {
            float cross = base * height; // Float for calculating cross-sectional area.
            float moment = (base * (height * height * height))/12; // Float for calculating moment of intertia.
            float section = (base * height)/6; // Float for calculating section modulus.

            printf("Base %.2f x Height %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", base, height, cross, moment, section);

            // Will print off results of the calculations for all possible combinations of height values with the current base value.
            // Then the first for loop will increment the base value by 2 and the process will repeat until a value  12  is reached in the first for loop.

        }
    }

    return 0;
}
