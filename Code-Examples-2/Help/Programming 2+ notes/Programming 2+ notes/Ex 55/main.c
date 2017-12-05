#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char fisrtName[20], surName[20];

    FILE *inFile;
    inFile = fopen("names.txt", "r");

    printf("**The names in the file are**\n");

    for(size = 0; size < 10; size++)
    {
        fscanf(inFile, "%s", fisrtName);
        fscanf(inFile, "%s", surName);
        printf("\nName no. %d  => %s %s", size + 1, fisrtName, surName);
    }
    printf("\n");

    fclose(inFile);
    return 0;
}
