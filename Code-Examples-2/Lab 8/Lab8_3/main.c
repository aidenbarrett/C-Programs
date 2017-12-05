/* Lab 8 Part 3
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 26/11/2014
Creates two memory allocations (using malloc) named One, and
Two of types int and double that can take 10 variables each.
Populates the arrays from user input and prints all values and
the cumulative value on to the screen. All data used in the
program must be dynamic and use a pointer.
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int *One, *One_temp;//Pointer for One and a pointer to be used temporarily to access each element
    int *One_total;//pointer to an int to store the cumulative sum of One's elements
    double *Two, *Two_temp;//Pointer for Two and a pointer to be used temporarily to access each element
    double *Two_total;//pointer to a double to store the cumulative sum of Two's elements

    One = malloc(N*sizeof(int));//Allocate enough memory for 'N' ints
    Two = malloc(N*sizeof(double));//Allocate enough memory for 'N' doubles

    One_total = malloc(sizeof(int));//Allocate the memory for One's cumulative sum
    Two_total = malloc(sizeof(double));//Allocate the memory for Two's cumulative sum
    *One_total = 0;//Initialise both sum counts
    *Two_total = 0;//

    printf("Please enter %d integers:\n", N);//Prompt the user for integer input

    One_temp = One;//Point the temporary pointer 'One_temp' to the first element of 'One'
    while(One_temp != (One+N))//loop until the temporary pointer is pointing past the last element of 'One'
    {
    	scanf("%d", &*One_temp);//scan in an int and store it in the current address of 'One_temp'
    	*One_total += *One_temp;//add the input to the cumulative sum of 'One'
    	One_temp++;//move 'One_temp' forward to the next element of 'One'
    }

    printf("Please enter %d doubles:\n", N);//Prompt the user for double input

    Two_temp = Two;//Point the temporary pointer 'Two_temp' to the first element of 'Two'
    while(Two_temp != (Two+N))//loop until the temporary pointer is pointing past the last element of 'Two'
    {
    	scanf("%lf", &*Two_temp);//scan in a double and store it in the current address of 'Two_temp'
    	*Two_total += *Two_temp;//add the input to the cumulative sum of 'Two'
    	Two_temp++;//move 'Two_temp' forward to the next element of 'Two'
    }

    printf("\n\n");

    One_temp = One;//reset 'One_temp' to point at the first element of 'One'
    while(One_temp != (One+N))//loop until the temporary pointer is pointing past the last element of 'One'
    {
    	printf("Array One\t->\t\t%d\n", *One_temp);//print the value that 'One_temp' points at
    	One_temp++;//move 'One_temp' forward to the next element of 'One'
    }
    printf("\nCumulative value of Array One = %d\n\n", *One_total);//print the cumulative sum of 'One'

	Two_temp = Two;//reset 'Two_temp' to point at the first element of 'Two'
    while(Two_temp != (Two+N))//loop until the temporary pointer is pointing past the last element of 'Two'
    {
    	printf("Array Two\t->\t\t%.2f\n", *Two_temp);//print the value that 'Two_temp' points at
    	Two_temp++;//move 'Two_temp' forward to the next element of 'Two'
    }
    printf("\nCumulative value of Array Two = %.2f\n\n", *Two_total);//print the cumulative sum of 'Two'

    free(One);
    free(Two);
    free(One_total);
    free(Two_total);

    printf("\n\nFreed Memory\n\n");

    One_temp = One;//reset 'One_temp' to point at the first element of 'One'
    while(One_temp != (One+N))//loop until the temporary pointer is pointing past the last element of 'One'
    {
    	printf("Array One\t->\t\t%d\n", *One_temp);//print the value that 'One_temp' points at
    	One_temp++;//move 'One_temp' forward to the next element of 'One'
    }
    printf("\nCumulative value of Array One = %d\n\n", *One_total);//print the cumulative sum of 'One'

	Two_temp = Two;//reset 'Two_temp' to point at the first element of 'Two'
    while(Two_temp != (Two+N))//loop until the temporary pointer is pointing past the last element of 'Two'
    {
    	printf("Array Two\t->\t\t%.2f\n", *Two_temp);//print the value that 'Two_temp' points at
    	Two_temp++;//move 'Two_temp' forward to the next element of 'Two'
    }
    printf("\nCumulative value of Array Two = %.2f\n\n", *Two_total);//print the cumulative sum of 'Two'

	return 0;
}
