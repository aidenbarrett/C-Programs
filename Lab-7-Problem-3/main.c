//
//  main.c
//  Lab 7 Problem 3A
//  Aiden Barrett
//  B00075033
//  A program that creates an array having 10 elements of type int called lab1_array.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lab1_array[10]; // Declares integer array of up to 10 values in length
    int i;

    printf("Enter 10 values:\n");


    for (i=0; i<=9; i++)
    {
         scanf ("%d", &lab1_array[i]);
    }

    for (i=0; i<=9; i++)
    {
         printf ("\nlab1_array[%d] = %d\n", i, lab1_array[i]); // Uses current counter value as index value and outputs array/index values
    }

    return 0;
}
