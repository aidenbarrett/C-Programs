//
//  main.c
//  Lab 4 Problem 2
//  Aiden Barrett
//  B00075033
//  A program using functions and pointers to swap values
//


#include <stdio.h>
#include <stdlib.h>

void swap( double *x, double *y);   // Declaration

int main()                          // Main
{

double a,b,*c,*d;

c = &a;   // The pointer c is pointing at the address of a. (& refers to the address.)
d = &b;

printf("Enter 1st number: ");
scanf("%lf",&a);

printf("Enter 2nd number: ");
scanf("%lf",&b);

swap(&a,&b); // Function - swaps the address of a and b and prints it out

printf("\n\n1st Number swapped = %.2lf\n",a);
printf("2nd Number swapped = %.2lf\n",b);

swap(c,d); // Function - swaps the addresses through the pointers and prints it out.

printf("\n\n1st Number returned = %.2lf\n",a);
printf("2nd Number returned = %.2lf\n",b);

return 0;
}

void swap( double*x, double*y)            // Function
                                          // The values of x and y are passed through the function.
{

int temp;
temp = *x;
*x = *y;
*y = temp;

return;
}

