#include <stdio.h>
#include <stdlib.h>

//Structure Template
struct Student
{
    char firstName[20];
    char secondName[20];
    int idNumber;
};

int main()
{

    int i;
    struct Student detail[3];

    printf("=> Please read in the following information for 3 students\n");
    printf("=> First name\n");
    printf("=> Second name\n");
    printf("=> idNumber\n");


    for(i=0; i<3; i++)
    {
        printf("\nPlease enter firstName %i: ", i+1);
        scanf("%s", detail[i].firstName);

        printf("Please enter secondName %i: ", i+1);
        scanf("%s", detail[i].secondName);

        printf("Please enter height %i: ", i+1);
        scanf("%d", &detail[i].idNumber);
    }


    for(i=0; i<3; i++)
    {
        printf("\n\nThe student %i's details \n %s %s=> %d\n", i+1, detail[i].firstName, detail[i].secondName, detail[i].idNumber);
    }

    return 0;
}


