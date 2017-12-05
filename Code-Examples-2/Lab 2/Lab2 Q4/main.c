//
//  main.c
//  Lab 2 Problem 4
//  Aiden Barrett
//  B00075033
//  A program to calculate the perimeter.

#include <stdio.h>
#include <math.h>


int main()
{


    double x1,x2,x3,y1,y2,y3; // 3 sets of integers (x1,y1), (x2,y2), (x3,y3).
    double perimeter;



    printf("Please enter the the first point (x1): ");
    scanf("%lf",&x1);

    printf("Please enter the the first point (y1): ");
    scanf("%lf",&y1);

    printf("Please enter the the second point (x2): ");
    scanf("%lf",&x2);

    printf("Please enter the the second point (y2): ");
    scanf("%lf",&y2);

    printf("Please enter the the third point (x3): ");
    scanf("%lf",&x3);

    printf("Please enter the the third point (y3): ");
    scanf("%lf",&y3);



    perimeter = sqrt(pow((x2-x1),2) + pow((y2-y1),2)) + sqrt(pow((x3-x2),2) + pow((y3-y2),2)) + sqrt(pow((x1-x3),2) + pow((y1-y3),2));



    printf("\nThe points are:\n\nPoint 1(%.2lf,%.2lf)\nPoint 2(%.2lf,%.2lf) \npPoint 3(%.2lf,%.2lf)\n",x1,y1,x2,y2,x3,y3);


    printf("\nThe Perimeter is = %.2lf ",perimeter);



    return 0;
}
