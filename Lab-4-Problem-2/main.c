//
//  main.c
//  Lab 4 Problem 2
//  Aiden Barrett
//  B00075033
//  A program that computes the length of the third side of a triangle when two sides and the angle between them are known.


#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()

{
    int deg;
    float a, b, c, rads;

    printf("Enter the values for 2 sides and one angle.\n\n"); //Prompt the user for values

    printf("Enter Side B:\n "); //Prompt for length of side B.

    scanf("%f", &b);

    printf("Enter Side C:\n "); //Prompt for length of side C.

    scanf("%f", &c);

    printf("Enter the Angle:\n "); //Prompt for angle between side A and B.

    scanf("%d", &deg);

    rads=deg*(PI/180 ); //Converts to radians.

    printf("Angle in Radians: %.2f\n\n", rads);

    a=sqrt(pow(b, 2)+pow(c, 2)-2*(b*c)*cos(deg)); //Formula to calcuate length of side A.

    printf("The length of Side A is: %.2f", a);

    return 0;

}
