//
//  main.c
//  Lab2 Problem 3
//
//  Aiden Barrett
//  Student ID; B00075033
//  Accept two integer numbers and displays their total, difference, product and modulus.


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int integer1, integer2, total, diff, prod, mod; // declares variables


    printf("Please enter an integer:\n");
    scanf("%d", &integer1);

    printf("You entered %d.\n", integer1);
    printf("Please enter another integer:\n");

    scanf("%d", &integer2);
    printf("You entered %d.\n", integer2);

    total = integer1 + integer2; // calculates total
    printf("Total: %d\n", total);

    diff = integer1 - integer2; // calculates difference
    printf("Difference: %d\n", diff);

    prod = integer1 * integer2; // calculates product
    printf("Product: %d\n", prod);

    mod = integer1 % integer2; // calculates modulus
    printf("Modulus: %d\n", mod);

    return 0;
}
