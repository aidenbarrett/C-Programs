//
//  main.c
//  Lab 5 Problem 4
//  Aiden Barrett
//  B00075033
//  A program that calculates the perimeter and area of a rectangle.

#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3; // 3 sets of integers (x1,y1), (x2,y2), (x3,y3).
    double height,breadth,area,perimeter;

    printf("Please enter the the first point (x1): "); // Prompts for input values
    scanf("%lf",&x1);
    printf("Please enter the the second point (x2): ");
    scanf("%lf",&x2);
    printf("Please enter the the third point (x3): ");
    scanf("%lf",&x3);
     printf("Please enter the the first point (y1): ");
    scanf("%lf",&y1);
    printf("Please enter the the second point (y2): ");
    scanf("%lf",&y2);
    printf("Please enter the the third point (y3): ");
    scanf("%lf",&y3);

    height = sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // Euclidean distance between the points.

    breadth = sqrt(pow(y3-y3,2)+pow(x3-x2,2));


    area = height * breadth; // Calculates Area
    perimeter = (2.0 * height) + (2.0 * breadth); //  Calculates Perimeter.

    printf("\n\nThe points are:\n\np1(%.2f,%.2f)\np2(%.2f,%.2f) \np3(%.2f,%.2f)\n",x1,y1,x2,y2,x3,y3); // Prints out points.

    printf("\nThe height is = %.2f ",height);
    printf("\nThe breadth is = %.2f ",breadth);
    printf("\nThe Area is = %.2f ",area);
    printf("\nThe Perimeter is = %.2f ",perimeter);

    return 0;
}
