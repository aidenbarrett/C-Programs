//
//  main.c
//  Lab 6 Problem 3
//  Aiden Barrett
//  B00075033
//  A program using structures to populate an array with module details.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct module
{
    char module_id[10];
    char module_name[12];
    double grade;
};


struct student
{
    char ID[10];
    struct module data[3];

};


int main()
{
    int i,j;

    struct student data1[2];

    printf("*******Module information******** \n\n\n");


    for(i=0;i<2;i++)
    {
       printf("Please enter ID: ");
       scanf("%s", data1[i].ID);

            for(j=0;j<3;j++)
            {
                printf("Module ID: ");
                scanf("%s", data1[i].data[j].module_id);
                fflush(stdin);
                printf("Module name: ");
                fflush(stdin);
                scanf("%s", data1[i].data[j].module_name);
                printf("Module grade: ");
                scanf("%lf", &data1[i].data[j].grade);
                fflush(stdin);
            }

    }

    for(i=0;i<2;i++)
    {
       printf(" \n\nID: %s \n",data1[i].ID);

            for(j=0;j<3;j++)
            {
                printf("Module ID: %s \n", data1[i].data[j].module_id);
                printf("Module name: %s \n", data1[i].data[j].module_name);
                printf("Enter module grade: %lf \n", data1[i].data[j].grade);
            }

    }

    return 0;
}








