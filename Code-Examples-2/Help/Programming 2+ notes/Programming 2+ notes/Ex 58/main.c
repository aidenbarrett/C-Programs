#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    char x, firstName[20];
    char surName[20];

    FILE *inFile;
    inFile = fopen("names.txt", "w");

    printf("=> Please enter in the following information for a person\n");
    printf("=> First name\n");
    printf("=> Surname\n");

    printf("\nPlease enter firstName %i: ", i);
    scanf("%s", firstName);

    printf("Please enter SurName %i: ", i);
    scanf("%s", surName);
    fflush(stdin);

    fprintf(inFile, "Name %i\n => %s ", i, firstName);
    fprintf(inFile, "%s\n", surName);
    printf("\nName no. %i  => %s %s\n", i, firstName, surName);

    fclose(inFile);


    FILE *inFile2;
    inFile2 = fopen("names.txt", "a");

    while(1)
    {
        printf("\nDo you want to enter another name into the file? => ");
        scanf("%c", &x);
        fflush(stdin);

        if(x == 'y' || x == 'Y')
        {
            printf("\nPlease enter firstName %i: ", i+1);
            scanf("%s", firstName);

            printf("Please enter SurName %i: ", i+1);
            scanf("%s", surName);
            fflush(stdin);

            fprintf(inFile2, "Name %i\n => %s ", i+1, firstName);
            fprintf(inFile2, "%s\n", surName);
            printf("\nName no. %i  => %s %s\n", i+1, firstName, surName);
            i++;
        }
        else if(x == 'n' || x =='N')
        {
            printf("\n\n=> Thank you and Goodbye\n\n");
            system("pause");
            exit (0);
        }
        else
        {
            printf("\n\nError: Invalid Choice, Please enter in 'y' or 'n'!\n");
            fflush(stdin);
        }
    }
    printf("\n**The names entered are now in the file**\n");

    fclose(inFile2);
    return 0;
}

