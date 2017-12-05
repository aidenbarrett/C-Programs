//
//  main.c
//  Lab 7 Problem 3B
//  Aiden Barrett
//  B00075033
//  A program that creates an array having 12 elements of type int called last_one.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int last_one[12]; // Declares integer array of up to 12 values in length
    int i;
    int sum = 0; // Declares and initialises integer variable sum to hold cummulative values

    for (i = 0; i <= 11; i ++)
    {
         printf ("Please enter integer value %d:\n", i + 1); // Prints integer value number by adding 1 to counter value which represents array index
         scanf ("%d", &last_one[i]); // Assigns integer value to array at index value corresponding to counter value

         sum = sum + last_one[i]; // Adds value of current array element to sum

         printf ("\nCummulative value: %d\n", sum); // Prints cummulative value
         printf ("\n");
    }


    return 0;
}
