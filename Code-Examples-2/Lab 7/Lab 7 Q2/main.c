//
//  main.c
//  Lab 7 Problem 2
//  Aiden Barrett
//  B00075033
//  A program to read information from a file
//

#include <stdio.h>
#include <stdlib.h>

struct module
{
    char Firstname[10];
    char Surname[10];
    char Student_id[10];
    double gpa;
};

int main(){

    int i;
    struct module data[2];

    printf("Enter student information.\n\n");

    FILE *f = fopen("file2.txt", "w");     //
    if (f == NULL)fopen("file1.txt", "r");
    {
    printf("Error opening file!\n");
    exit(1);
    }

    for(i=0;i<2;i++)
    {
        printf("Enter first name: ");
        scanf("%s", data[i].Firstname);
        printf("Enter Surname: ");
        scanf("%s", data[i].Surname);
        printf("Enter Student ID : ");
        scanf("%s", data[i].Student_id);
        printf("Enter GPA: ");
        scanf("%lf", &data[i].gpa);
    }

    for(i=0;i<2;i++)
    {
       printf("\nFirst name: %s\n ", data[i].Firstname);
       printf(" Surname: %s \n", data[i].Surname);
       printf(" Enter Student ID: %s\n ", data[i].Student_id);
       printf(" Enter GPA:%f \n\n", data[i].gpa);
       fprintf(f, "\n\nFirst name: %s\nSurname: %s\nStudent ID: %s\nGPA: %.2f\n", data[i].Firstname, data[i].Surname, data[i].Student_id, data[i].gpa);
    }

   fclose(f);

    FILE *f = fopen("file2.txt", "a");     //
    if (f == NULL)
    {
    printf("Error opening file!\n");
    exit(1);
    }

     for(i=0;i<2;i++)
    {
        printf("Enter first name: ");
        scanf("%s", data[i].Firstname);
        printf("Enter Surname: ");
        scanf("%s", data[i].Surname);
        printf("Enter Student ID : ");
        scanf("%s", data[i].Student_id);
        printf("Enter GPA: ");
        scanf("%lf", &data[i].gpa);
    }

    for(i=0;i<2;i++)
    {
       printf("\nFirst name: %s\n ", data[i].Firstname);
       printf(" Surname: %s \n", data[i].Surname);
       printf(" Enter Student ID: %s\n ", data[i].Student_id);
       printf(" Enter GPA:%f \n\n", data[i].gpa);
       fprintf(f, "fopen("file2.txt", "r");\n\nFirst name: %s\nSurname: %s\nStudent ID: %s\nGPA: %.2f\n", data[i].Firstname, data[i].Surname, data[i].Student_id, data[i].gpa);
    }fopen("file1.txt", "r");

   fclose(f);
    }

   fopen("file2.txt", "r");

    return 0;
}


