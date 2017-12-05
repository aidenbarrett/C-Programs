//
//  main.c
//  Lab 2 Problem 3
//  Aiden Barrett
//  B00075033
//  A program to play the high low game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main()
 {

    int guess, number;

    srand (time(NULL));

    number = (rand() % 100);


    while (guess != number)
    {


    printf("Please guess the random number between 1 and 100:");
    scanf("%d", &guess);

        if (guess < number)
        {
            printf("\nToo Low. Guess Again: \n");
        }

        else if (guess > number)
        {
            printf("\nToo High. Guess Again: \n");
        }
        else
    {
        printf("\nGood Guess!");

    }
    }



    return 0;
}


