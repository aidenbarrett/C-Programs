//
//  main.c
//  Lab 8 Problem 1
//  Aiden Barrett
//  B00075033
//  A program using functions and structures.
//

#include <stdio.h>
#include <stdlib.h>

struct time

{
    int hours;
    int minutes;
    int seconds;
};


struct time split_time(long total_seconds);


int main()

{

    long total_seconds;
    struct time solution;


    printf("Please enter number of seconds: ");

    scanf("%ld", &total_seconds);


    solution = split_time(total_seconds);

    printf("%d hours, %d minutes, %d seconds\n", solution.hours, solution.minutes, solution.seconds);


    return 0;

}

struct time split_time(long total_seconds){

    struct time CALCULATION;

    CALCULATION.hours = total_seconds/3600;
    CALCULATION.minutes = (total_seconds%3600)/60;
    CALCULATION.seconds = ((total_seconds%3600)%60)%60;

    return CALCULATION;

}
