/* Lab 8 Part 2
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 26/11/2014
Creates three arrays named One, Two and Three of types int,
char and double. Each array should have at least 10 unique
elements. Populates each array from user input using a pointer
and prints the even array elements on to the screen.
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i, j;//counters for the for loops
    int One[N];//Array of type int
    char Two[N];//Array of type char
    double Three[N];//Array of type double

    printf("Please enter %d integers:\n", N);//prompts the user to input integers

    for (i=0; i<N; i++)
    {
        scanf("%d", &*(One+i)); //stores the input in the current position of One, which
                                //increments each time the for loop repeats
        for (j=0; j<i; j++)//scans all previous entries to check for duplicates
        {
        	while (*(One+i) == *(One+j))//this loop checks if the input has already been added to the array,
        	{                           //and will prompt the user until a unique input is entered.
        		printf("Enter an integer that you haven't already used:\n");
                scanf("%d", &*(One+i));
                j=0;
        	}
        }
    }

    printf("Please enter %d characters:\n", N);

    for (i=0; i<N; i++)
    {
        scanf(" %c", &*(Two+i));
        for (j=0; j<i; j++)
        {
        	while (*(Two+i) == *(Two+j))//this loop checks if the input has already been added to the array,
        	{                           //and will prompt the user until a unique input is entered.
        		printf("Enter a character that you haven't already used:\n");
                scanf(" %c", &*(Two+i));
                j=0;
        	}
        }
    }

    printf("Please enter %d doubles:\n", N);

    for (i=0; i<N; i++)
    {
        scanf("%lf", &*(Three+i));
        for (j=0; j<i; j++)
        {
        	while (*(Three+i) == *(Three+j))//this loop checks if the input has already been added to the array,
        	{                               //and will prompt the user until a unique input is entered.
        		printf("Enter a double that you haven't already used:\n");
                scanf("%lf", &*(Three+i));
                j=0;
        	}
        }
    }

    for (i=0; i<N; i+=2)
    {
    	printf("Array One\t->\tElement %d:\t%d\n", i, *(One+i));
    }
    printf("\n\n");

    for (i=0; i<N; i+=2)
    {
    	printf("Array Two\t->\tElement %d:\t%c\n", i, *(Two+i));
    }
    printf("\n\n");

    for (i=0; i<N; i+=2)
    {
    	printf("Array Three\t->\tElement %d:\t%.2f\n", i, *(Three+i));
    }
    printf("\n\n");

	return 0;
}
