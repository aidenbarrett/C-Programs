//
//  main.c
//  Lab 4 Problem 1
//  Aiden Barrett
//  B00075033
//  A program to prompt the user for two values and print the largest
//

#include <stdio.h>
#include <stdlib.h>

float largest(float *a, float *b); //Declaration

int main()                         // Main program
{
    float x,y;

    printf("Enter values for A and B: \n");
    scanf("%f%f",&x,&y);

    if (x==y){
    printf("Values are equal, enter again! \n\n");

    printf("Enter values for A and B: \n");
    scanf("%f%f",&x,&y);
    }

    printf("Function returns %.2f as the largest",largest(&x,&y)); // & refers to address/location.
                                                                   // * refers to the value.
    return 0;
}

float largest(float *a, float *b)   // Function
{

    if(*a>*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}
