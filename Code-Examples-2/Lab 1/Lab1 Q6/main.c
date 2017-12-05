//
//  main.c
//  Lab 1 Problem 6
//  Aiden Barrett
//  B00075033
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, odd=0, even=0, array[20];

    printf("Please enter 20 numbers\n");

    for(i=0; i<20; i++){
        scanf("%d", &array[i]);
        if(array[i]==0){
        printf("Enter a number other than zero.\n");
        }
            if(array[i]%2==0){
            even=even+1;
        }
            else
            odd=odd+1;
        }

    printf("Number Of Odd values: %d\n", odd);
    printf("Number Of Even values: %d\n", even);

    return 0;
}
