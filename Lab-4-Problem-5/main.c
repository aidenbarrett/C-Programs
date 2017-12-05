//
//  main.c
//  Lab 4 Problem 5
//  Aiden Barrett
//  B00075033
//  A program using a nested loop to read the side of a square and print out the square using *.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n, row=0, column=0;

    printf("Please enter a value for the side of the square: "); //Prompt for values.
    scanf("%d",&n);

    for (row=0; row<n; row++) {
        for (column = 0; column<n; column++) { //Nested loop.
        printf("#");
    }

    printf("\n");
}

    return 0;

}
