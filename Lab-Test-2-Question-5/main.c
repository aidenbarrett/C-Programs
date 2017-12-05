#include <stdio.h>
// Lab Test 2
// Question 5
// Aiden Barrett
// B00075033
// A program that calculates area and circumference

#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
    int i, count, data[11] = {10,11,12,13,14,15,16,17,18,19,20};
    float area,circum,radius;


    for(i=0;i<11;i++);{
        printf("%d", data[i])

        radius=(data[11]/2);}

    area = PI*radius*radius;
    circum = 2*PI*radius;

    printf("Area =%.2f, Circumference =%.2f",area, circum);

    return 0;



}

