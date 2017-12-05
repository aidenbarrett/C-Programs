//
//  main.c
//  Lab 5 Problem 1
//  Aiden Barrett
//  B00075033
//  A program that computes the sum of a harmonic series 1 + 1/2 + 1/3 + 1/4 + .... + 1/n, where n = 1000, prompt user for the value of n.
//

#include <stdio.h>
#include <stdlib.h>

int main()

{

    int i, n;

    float sum = 0;

    printf( "Enter the value for n : ");

    scanf("%d", &n);


    for (i = 1; i <= n; i ++) // counts through all values for n

    {
        sum = sum + 1.0/i;

    }
        printf ("\nThe sum of harmonic series up to %d = %.4f\n", n, sum ); // outputs sum of harmonic series to 0.0001 places

    return 0;

}
