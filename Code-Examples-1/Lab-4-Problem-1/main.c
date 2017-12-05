//
//  main.c
//  Lab 4 Problem 1
//  Aiden Barrett
//  B00075033
//  A program to calculate the mean, standard deviation, upper and lower critical Limit.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
    {

    int i;
    float data [10],ave=0,sum=0, sd, ucl, lcl;

    printf("Enter 10 Values:\n");

    for(i=0; i<10; i++){
        scanf("%f", &data[i]);
        ave= ave+data[i];
    }
    for(i=0; i<10; i++){
        sum = sum + (ave - pow(data[i],2));
        printf("\n%.2f\n", sum);
    }
    for(i=0; i<10; i++){
        ucl = ((ave+data[i]) + (3*sd));
        lcl = ((ave+data[i]) - (3*sd));
    }

    sum = sum/9.0;
    sd = sqrt(sum);
    ave = ave/10.0;

    printf("Mean is %f\n\n", ave);
    printf("Standard deviation is %f\n\n", sd);
    printf("Upper Critical limit is %f\n\n", ucl);
    printf("Lower Critical limit is %f\n\n", lcl);

    return 0;
}


