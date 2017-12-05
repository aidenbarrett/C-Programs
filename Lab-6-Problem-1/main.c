//
//  main.c
//  Lab 6 Problem 1
//  Aiden Barrett
//  B00075033
//  A program that finds the largest and smallest of four integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, data[4];
    int max, min;


    printf("Enter 4 integers: \n");

    for (i=0; i<4; i++){
        scanf("%d", &data[i]);
    }

    min = data[0]; // Must be inside loop and after scan f
    max = data[0];

    for (i=0; i<4; i++){

        if (data[i]>max){ // Keep if statements inside brackets
            max = data[i];
        }

        if (data[i]<min){ // Keep if statements inside brackets
            min = data[i];
        }

    }

    printf("\nMax is : %d\n", max);
    printf("\nMin is : %d\n", min);

    return 0;
}
