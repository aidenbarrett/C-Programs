//
//  main.c
//  Lab2 Problem 1C
//
//  Aiden Barrett
//  Student ID; B00075033

#include <stdio.h>
#include <stdlib.h>


int main()
{
        float base , height , area;


            printf("Enter base , height: ");
            scanf("%f %f", &base , &height );

            area =  (base * height) /2.0;

            printf("Area = %.2f\n", area);



return 0;
}
