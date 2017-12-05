//
//  main.c
//  Lab 5 Problem 3
//  Aiden Barrett
//  B00075033
//  A program using pointers arithmetic instead of array subscripting
//


#include <stdio.h>
#include <stdlib.h>

#define N 10

int sum_array(const int *a, int n);   // Declaration

int main()

{

    int a[N] = {1,2,3,4,5,6,7,8,9,10};
    int i, sum;

    sum = 0;

    for(i=0;i<N; i++){
        sum = sum + a[i] ;
        printf("The sum is: %d",sum)
    }
    return 0;
}


int sum_array(const int *a, int n)
{

}
