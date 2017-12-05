//
//  main.c
//  Lab 3 Problem 3B
//  Aiden Barrett
//  B00075033
//  A program that uses a for loop to print.

#include <stdio.h>

int main()
{
    int i;

    for(i=1; i<=10; i++){ // Repeats while i is less than 10

        if (i%2 == 0){ // == (to test for equality)
            printf("%d - For loops are easier to use!\n\n", i);
        }

        else
            printf("%d - For loops are easier to use! Odd\n\n", i);

    }

    return 0;
}
