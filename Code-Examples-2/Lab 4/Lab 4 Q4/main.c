//
//  main.c
//  Lab 4 Problem 4
//  Aiden Barrett
//  B00075033
//  A program to find the largest and second largest
//


#include <stdio.h>
#include <stdlib.h>
#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
    int a[N], i, largest, second_largest;

    printf("Enter %d numbers:\n\n", N);
    for (i = 0; i < N; i++){
        scanf(" %d", &a[i]);
    }

find_two_largest(a, N, &largest, &second_largest);  // Function

    printf("\n\nLargest %d\n\n", largest);
    printf("Second Largest: %d", second_largest);


    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)

{

 int i, temp;

 *largest = *second_largest = a[0];

 for (i = 1;i < n; i++)
 {
 if (a[i] > *largest)
 *largest = a[i];
 temp = i;
 }
 a[temp] = 0;
 for (i = 1; i < n; i++){
 if (a[i] > *second_largest)
 *second_largest = a[i];
 }
}

