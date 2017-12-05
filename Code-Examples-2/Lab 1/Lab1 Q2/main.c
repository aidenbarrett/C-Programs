//
//  main.c
//  Lab 1 Problem 2
//  Aiden Barrett
//  B00075033
//


#include <stdio.h>


  int main()
{
    int i=0;
    int number,sum;

    printf("Please enter a number: ");

    scanf("%d",&number);


    for(i=0; i<9; i++){

    printf("\nEnter another number: ");

    scanf("%d",&sum);

    number=number+sum;


    printf("\nThe sum of the values is %d\n",number);

     }

    return 0;
}
