//
//  main.c
//  Lab 7 Problem 1
//  Aiden Barrett
//  B00075033
//  A program to read a file and display the information on screen.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

/*

int main()
{

   FILE *fptr;                                      // File pointer
   fptr=fopen("program.txt","r");                   // Function to open file in read mode.
   if(fptr==NULL){                                  // If file doesnt exist, show warning.
      printf("Error! File does not exist!!\n\n\n");

   }
   return 0;
}

*/

 char name[20];                       // Initialises array variables
 char sname[20];

    FILE *f = fopen("file1.txt", "w");// Function to open file in write mode
    if (f == NULL)
    {
    printf("Error opening file!\n");
    exit(1);
    }

    printf("Enter first name: ");
    scanf("%s",name );                // *No "&" because its an array
    printf("Enter Surname: ");
    scanf("%s",sname );

    fprintf(f,"\nFirst name: %s\nSurname: %s", name,sname); //Prints to file
    fclose(f);                          // Closes file

    printf( "\First name: %s\nSurname: %s\n\n", name,sname);

    fopen("file1.txt", "r");            // Opens file again in read mode.

    return 0;
}
