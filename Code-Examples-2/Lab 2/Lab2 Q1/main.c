//
//  main.c
//  Lab 2 Problem 1
//  Aiden Barrett
//  B00075033
//  A program to generate wind speeds
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
    int i, wind;

    srand(time( NULL ));

        for ( i = 0; i < 100; i++ ) {

        wind = 0 + (rand() % 100);

    printf("Random wind velocity (in knots): %d\n",wind);


    if(wind<1){
                                                                                                     // Calculate Stamp duty by multiplying value by rate and divide by 100.
            printf("\nThe wind condition is: Calm\n");
    }

    if(wind>=1 && wind<=3){

            printf("\nThe wind condition is: Light Air\n");
    }

    if(wind>3 && wind<=27){

            printf("\nThe wind condition is: Breeze\n");
    }

    if(wind>27 && wind<=47){

            printf("\nThe wind condition is: Gale\n");
    }

    if(wind>48 && wind<=63){

            printf("\nThe wind condition is: Storm\n");
    }

    if(wind>63){

            printf("\nThe wind condition is: Hurricane\n");
    }

    return 0;

}

}
