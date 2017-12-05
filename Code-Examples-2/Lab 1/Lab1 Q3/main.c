//
//  main.c
//  Lab 1 Problem 3
//  Aiden Barrett
//  B00075033
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum=0;

    printf("Please enter a number other than zero: ");

    while(i!=0){
        scanf("%d", &i);
        sum=sum+i;
        printf("Sum = %d\n", sum);

    }

    return 0;
}
