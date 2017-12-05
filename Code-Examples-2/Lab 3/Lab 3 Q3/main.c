//
//  main.c
//  Lab 3 Problem 3
//  Aiden Barrett
//  B00075033
//  A program which using functions that returns the number of digits in a positive integer.
//

#include <stdio.h>
#include <stdlib.h>

int num_digits(int a);   // Declaration

int main()             // Main
{
    int n;

    printf("Enter a positive number: \n\n");
    scanf("%d",&n);

    printf("There are %d digits\n",num_digits(n));

    return 0;
}
int num_digits(a)       // Function
{
    int count=0;        // Sets count at 0


    if (a<=50000){
        while (a>0)

        {
        a/=10;       // divides by 10 until no remainder.
        ++count;
        }
    }
        else{
        printf("The number is too big\n\n");
    }

        return count;      // Returns value for count.
}
