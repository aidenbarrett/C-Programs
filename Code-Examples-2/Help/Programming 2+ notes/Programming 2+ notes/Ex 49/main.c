#include <stdio.h>
#include <stdlib.h>

//Structure template
struct person
{
    char firstName[20];
    char familyName[20];
    float height;
};

int main()
{
    int i;
    float average;
    struct person people[5];

    for(i=0; i<5; i++)
    {
        printf("Please enter firstName %i: ", i+1);
        scanf("%s", people[i].firstName);

        printf("Please enter secondName %i: ", i+1);
        scanf("%s", people[i].familyName);

        printf("Please enter height %i: ", i+1);
        scanf("%f", &people[i].height);
        printf("\n");
    }


    for(i=0; i<5; i++)
    {
        printf("\nPerson no. %i \n %s %s=> %.2f\n", i+1, people[i].firstName, people[i].familyName, people[i].height);
    }

    for(i=0; i<5; i++)
    {
        average += people[i].height;
    }

    average /= 5;

    printf("\nThe Average height for the 5 people => %.2f\n", average);


    return 0;
}














