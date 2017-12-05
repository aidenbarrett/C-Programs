#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inFile;
    inFile = fopen("names.txt", "a");

    fprintf(inFile, "-> Hello World\n");
    printf("\n-> Hello World\n");

    fclose(inFile);
    return 0;
}
