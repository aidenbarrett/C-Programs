//
//  main.c
//  Lab 6 Problem 4
//  Aiden Barrett
//  B00075033
//  A program using structures to populate an array with module details.
//

#include <stdio.h>
#include <stdlib.h>

struct date //Structure definition
{
 int day ;
 int month ;
 int year ;
} ;
typedef struct date DATE ;


struct personnel // Populates structure with Employee details.
{
 int number ;
 char surname[21] ;
 char first_name[11] ;
 DATE dob ;
 DATE joined ;
} ;

typedef struct personnel EMPLOYEE ;


void display_an_employee( const EMPLOYEE person_array[] ) ;


int main()
{
        EMPLOYEE person_array[2];
        int i;

        for(i=0;i<2;i++)
        {
        printf(" Enter Employee Number: ");
        scanf("%d", &person_array[i].number);
        printf(" Enter Surname: ");
        scanf("%s", person_array[i].surname);
        printf(" Enter First Name: ");
        scanf("%s", person_array[i].first_name);


        printf(" Enter date of birth (in the format DD:MM:YYYY): ");
        scanf("%d:%d:%d", &person_array[i].dob.day,&person_array[i].dob.month,&person_array[i].dob.year);

        printf(" Enter date joined (in the format DD:MM:YYYY): ");
        scanf("%d:%d:%d", &person_array[i].joined.day, &person_array[i].joined.month,&person_array[i].joined.year);
        fflush(stdin);

        }

        printf("\n\nEmployee details");
        display_an_employee( person_array);

    return 0;
}

void display_an_employee(const EMPLOYEE person_array[] )
{

    int i;

    for(i=0;i<2;i++)
    {
        printf("\n\n");
        printf(" Employee Number: %d \n",person_array[i].number);
        printf(" Employee Surname: %s \n", person_array[i].surname);
        printf(" Employee First Name: %s \n", person_array[i].first_name);
        printf(" date of birth: %d/%d/%d \n", person_array[i].dob.day, person_array[i].dob.month, person_array[i].dob.year);
        printf(" Enter date joined: %d/%d/%d \n", person_array[i].joined.day, person_array[i].joined.month, person_array[i].joined.year);
        printf("\n\n");
        fflush(stdin);

    }

    return;

}
