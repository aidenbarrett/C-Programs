//
//  main.c
//  Lab2 Problem 4
//
//  Aiden Barrett
//  Student ID; B00075033
//  Program to accept a positive integer value representing a wage amount.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wage, twenty, ten, five, one;

            printf("\tEnter Wage\n\n\t");

            scanf("%d", &wage);

            twenty = wage / 20;

            ten = (wage %20) / 10;

            five = ((wage %20) %10) /5;

            one = ((wage %20) %10) %5;

            printf("\n\n\tNumber of twenty notes = %d\n\n", twenty);
            printf("\tNumber of ten notes = %d\n\n", ten);
            printf("\tNumber of five notes = %d\n\n", five);
            printf("\tNumber of pound coins = %d\n\n\t", one);



    return 0;
}




