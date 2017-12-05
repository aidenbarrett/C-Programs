//
//  main.c
//  Lab 7 Problem 4
//  Aiden Barrett
//  B00075033
//  A program that uses an array to store values, calculates the squares cubes and
//  square roots of the numbers from 0 to 10 and prints a table of values:
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    float numbers[11];
    float squares[11];
    float cubes[11];
    float roots[11];

    printf ("Number:\t\tSquare:\t\tCube:\t\tRoot:\t\t\n\n"); // Prints the table headings.

    for (i=0; i<=10; i++)
    {
        numbers[i] = i; // Value in numbers array index i is equal to current counter value
        printf ("%.2f\t\t", numbers[i]); // Prints value of numbers array index

        squares[i] = pow (numbers[i], 2); // Squares value of numbers array index and assigns it as index value of squares array
        printf ("%.2f\t\t", squares[i]); // Prints value of squares array index

        cubes[i] = pow (numbers[i], 3); // Cubes value of numbers array index and assigns it as index value of cubes array
        printf ("%.2f\t\t", cubes[i]); // Prints value of cubes array index

        roots[i] = sqrt (numbers[i]); // Calculates square root of value of numbers array index and assigns it as index value of roots array
        printf ("%.2f\n", roots[i]); // Prints value of roots array index
    }

    return 0;
}
