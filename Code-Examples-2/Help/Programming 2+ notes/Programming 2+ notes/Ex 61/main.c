#include <stdio.h>
#include <stdlib.h>

#define num 10

int main()
{
    int i = 0;
    char fisrtName[20], surName[20];
    char File[20];

    printf("\nPlease enter the File Name: ");
    scanf("%s", File);

    FILE *inFile;
    inFile = fopen("File", "r");

    printf("**The names in the file are**\n");

    for(i = 0; i < num; i++)
    {
        fscanf(inFile, "%s", fisrtName);
        fscanf(inFile, "%s", surName);
        printf("\nName no. %d  => %s %s", i + 1, fisrtName, surName);
    }
    printf("\n");
    return 0;
}
