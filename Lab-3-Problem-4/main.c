//
//  main.c
//  Lab 3 Problem 4
//  Aiden Barrett
//  B00075033
//  A program that converts all 360 degrees to radians.

#include <stdio.h>
#define PI 3.14 // Symbolic Constant - page 14 in book


int main()
{
    int deg;
    float rad;

    for(deg=1; deg<=360; deg++)
    {

        rad=deg*(PI/180 );

        printf("%d degrees = %.2f radians\n", deg, rad);
    }

    return 0;
}

