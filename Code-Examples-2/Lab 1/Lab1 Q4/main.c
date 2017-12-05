//
//  main.c
//  Lab 1 Problem 4
//  Aiden Barrett
//  B00075033
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, lab_array[10];

    printf("Please enter 10 numbers:\n");

    for(i=0; i<10; i++){
        scanf("%d", &lab_array[i]);
    }

        for(i=0; i<10; i++){
            printf("%d ", lab_array[i]);
        }


    return 0;
}
