//
//  main.c
//  Lab 7 Problem 2A
//  Aiden Barrett
//  B00075033
//  A program that accepts your first name and returns it to the screen ten times.
//

#include <stdio.h>
#include <stdlib.h>


int main()

{

    char data[10];

    int i,j;

    printf("Please enter a name: ");
    scanf("%s",data);


    for(j=0; j<10; j++){

        for(i=0; data[i]!='\0'; i++){ // Ask about null character, such as the '\0' character and ask about "strlen"???

            printf("%c",data[i]);

            }
                  printf ("\n"); // Prints on new line

}

        return 0;
}

