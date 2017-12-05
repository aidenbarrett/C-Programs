//
//  main.c
//  Lab 3 Problem 3A
//  Aiden Barrett
//  B00075033
//  A program that uses a while loop to print.

#include <stdio.h>

int main()
{
    int i=1;

    // Starts the the loop

    while(i<=10){

        if (i%2 == 0){
        // == Comparator (to test for equality). The reason for using two equal signs for equality
        //  is that the single equals sign designates a value in a variable - it is the assignment operator.

            printf("%d - I am rather partial to a while loop! Even\n\n", i);
        }

        else
            printf("%d - I am rather partial to a while loop!\n\n", i);

        i++; // The ++ operator is used to add one to i each time.
            // Increments to prevent an infinite loop, once i is greater than 10.

    }

    return 0;
}

