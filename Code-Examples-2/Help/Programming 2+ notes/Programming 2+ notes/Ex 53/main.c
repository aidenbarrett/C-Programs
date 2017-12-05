#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Structure Template
struct Student
{
    char firstName[20];
    char secondName[20];
    int idNumber;
};

void printStudentV1(struct Student detail);

void printStudentV2(struct Student *);

int main()
{

    struct Student detail;
    struct Student detail2;

    printf("=> Please read in the following information for a students\n");
    printf("=> First name\n");
    printf("=> Second name\n");
    printf("=> idNumber\n");


    printf("\nPlease enter firstName: ");
    scanf("%s", detail.firstName);

    printf("Please enter secondName: ");
    scanf("%s", detail.secondName);

    printf("Please enter idNumber: ");
    scanf("%d", &detail.idNumber);

    printStudentV1(detail);

    detail2 = detail;

    printStudentV2(&detail2);

    return 0;
}


void printStudentV1(struct Student detail)
{
    printf("\n\nThe student 1's details \n %s %s => %d\n", detail.firstName, detail.secondName, detail.idNumber);
}

void printStudentV2(struct Student *p)
{
    printf("\n\nThe student 2's details \n %s %s => %d\n", (*p).firstName, (*p).secondName, (*p).idNumber);
}

