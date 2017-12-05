#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[5][20];
    char familyName[5][20];
    float height[5], average;
    int i;

    printf("=> Please read in the following information for 5 people\n");
    printf("=> First name\n");
    printf("=> Family name\n");
    printf("=> Height\n");

    for(i=0; i<5; i++)
    {
        printf("\nPlease enter firstName %i: ", i+1);
        scanf("%s", firstName[i]);

        printf("\nPlease enter familyName %i: ", i+1);
        scanf("%s", familyName[i]);

        printf("Please enter height %i: ", i+1);
        scanf("%f", &height[i]);
        printf("\n");
    }

    for(i=0; i<5; i++)
    {
        printf("\nPerson no. %i's \n %s %s=> %.2f\n", i+1, firstName[i], familyName[i], height[i]);
    }

    for(i=0; i<5; i++)
    {
        average += height[i];
    }

    average /= 5;

    printf("\nThe Average height for the 5 people => %.2f\n", average);

    return 0;
}
