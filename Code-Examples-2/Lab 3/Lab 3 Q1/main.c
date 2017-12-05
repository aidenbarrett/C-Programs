//
//  main.c
//  Lab 3 Problem 1
//  Aiden Barrett
//  B00075033
//  A program which computes the area of a triangle using functions
//


#include <stdio.h>
#include <stdlib.h>


double triangle_area(double base,double height);

int main()
{
    double base;
    double height;

    printf("Enter values for base and height: \n");
    scanf("%lf%lf",&base,&height);

    printf("The area of the triangle is: %.2lf",triangle_area(base,height));

    return 0;
}

double triangle_area(double base,double height)
{
    double product;

    product = base * height;
    return product / 2;
}
