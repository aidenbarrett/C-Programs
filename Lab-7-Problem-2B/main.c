//
//  main.c
//  Lab 7 Problem 2B
//  Aiden Barrett
//  B00075033
//  A program that accepts your first name and returns it to the screen ten times.
//

#include <stdio.h>
#include <stdlib.h>


int main()

{

    char data[10];

    int i;

    printf("Please enter a name: ");
    scanf("%s",data);

    for(i=0; i<10; i++){

        printf("%s\n",data);

        }

    return 0;
}
