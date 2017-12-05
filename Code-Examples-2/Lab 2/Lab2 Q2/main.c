//
//  main.c
//  Lab 2 Problem 2
//  Aiden Barrett
//  B00075033
//  A program to print out a number

#include <stdio.h>
#include <stdlib.h>

int main()

{

    int number;

    printf("Please enter a number between 0 and 9: ");

    scanf("%d", &number);

    if(number>9){

        printf("Enter a single digit only: ");
        scanf("%d", &number);
    }

    switch (number)


    {
        case 0:
                printf("\nYou entered Zero\n");

                break;
        case 1:
                printf("\n You entered: One\n");

                break;
        case 2:
                printf("\nYou entered: Two\n");

                break;

        case 3:
                printf("\nYou entered: Three\n");

                break;

        case 4:
                printf("\nYou entered: Four\n");

                break;

        case 5:
                printf("\nYou entered: Five\n");

                break;

        case 6:
                printf("\nYou entered: Six\n");

                break;
        case 7:
                printf("\nYou entered: Seven\n");

                break;

        case 8:
                printf("\nYou entered: Eight\n");

                break;

        case 9:
                printf("\nYou entered: Nine\n");

                break;


    }

    return 0;
}
