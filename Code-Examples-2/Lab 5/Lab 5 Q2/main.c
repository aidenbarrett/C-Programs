//
//  main.c
//  Lab 5 Problem 2
//  Aiden Barrett
//  B00075033
//  A program to pass pointers and arrays to a function
//

#include <stdio.h>
#include <stdlib.h>

#define N 10

void swap( int*p, int*q);  // Declaration

int main()
{

    int a[N] = {1,2,3,4,5,6,7,8,9,10};
    int i, *p = &a[0], *q = &a[N-1];

    printf("Number before:\n\n");
    for (i=0; i<10; i++){
        printf("Array Location %d contains %d\n",i,a[i]);
    }

    swap(p,q);             // Function

    printf("\nNumber after:\n\n");
    for (i=0; i<10; i++){
        printf("Array location %d contains %d\n",i,a[i]);
    }

    return 0;
}

    void swap( int*p, int*q)  // Function
{

    int temp;

    while (p < q){
    temp = *p;
    *p++ = *q;
    *q-- = temp;
    }
}
