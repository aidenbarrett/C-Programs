#include <stdio.h>
#include <stdlib.h>

#define num 5

int main()
{
    char firstName[num][20];
    char surName[num][20];
    int i;

    FILE *inFile;
    inFile = fopen("names.txt", "w");

    printf("=> Please read in the following information for 5 people\n");
    printf("=> First name\n");
    printf("=> Surname\n");

    for(i = 0; i < num; i++)
    {
        printf("\nPlease enter First Name %i: ", i+1);
        scanf("%s", firstName[i]);

        printf("\nPlease enter Surname %i: ", i+1);
        scanf("%s", surName[i]);
    }

    printf("\n\n**The names below are now on the file <names>**\n");

    for(i = 0; i < num; i++)
    {
        fprintf(inFile, "Name %i\n => %s ", i+1, firstName[i]);
        fprintf(inFile, "%s\n", surName[i]);
        printf("\nName %i\n => %s %s\n", i+1, firstName[i], surName[i]);
    }

    fclose(inFile);
    return 0;
}
