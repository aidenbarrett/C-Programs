//
//  main.c
//  Lab 6 Problem 4
//  Aiden Barrett
//  B00075033
//  Program to compute the running sum of any numbers input by the user.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i;
    int number,sum;

    printf("Please enter a number: ");

    scanf("%d",&number);


    for(i=0; i=i+sum; i++){ // ask about "words" being used in For loops! For example, could words replace "i"

    printf("\nEnter another number: ");

    scanf("%d",&sum);

    number=number+sum;


    printf("\nThe sum of the values is %d\n",number);

     }

    return 0;

}
