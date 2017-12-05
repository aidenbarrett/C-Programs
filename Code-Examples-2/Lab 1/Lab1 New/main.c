//
//  main.c
//  Lab 1 Problem 1
//  Aiden Barrett
//  B00075033
//

#include <stdio.h>


int main()
{
    int a,b,c,sum,product;
    float average;

    printf("Enter value for a: ");
    scanf("%d",&a);

    printf("Enter value for b: ");
    scanf("%d",&b);

    printf("Enter value for c: ");
    scanf("%d",&c);


    sum = a+b+c;
    average = sum/3.0;
    product = a*b*c;

    printf("\n\nThe sum of the numbers is: %d\n",sum);

    printf("\n\nThe average of the numbers is: %.2f\n",average);

    printf("\n\nThe product of the numbers is: %d\n\n",product);

    if (a > b&&a > c){
        printf( "%d is the largest number\n\n", a);
    }
    if (b > a&&b > c){
        printf( "%d is the largest number\n\n", b);
    }
    if (c > a&&c > b){
        printf( "%d is the largest number\n\n", c);
    }
    if (a < b&&a < c){
        printf( "%d is the smallest number\n\n", a);
    }
    if (b < a&&b < c){
        printf( "%d is the smallest number\n\n", b);
    }
    if (c < a&&c < b){
        printf( "%d is the smallest number\n\n", c);
    }


          return 0;
}
