#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,  letterGrade[12];
    float gpa[12], TotalGpa, FinalGpa, a[12];
    char studentNumber[12];

    printf("\nPlease enter your student number including the leading B : ");
    scanf("%s", &studentNumber);

    for(i = 0; i < 12; i++)
    {
        printf("Please enter a the result for the module %d: ", i + 1);
        scanf("%f",&a[i]);

        if(a[i] >= 0 && a[i] <= 100)
        {
            if (a[i] < 35)
            {
                gpa[i] = 0;
                letterGrade[i] = 'F';
            }
            else if (a[i] >= 35 && a[i] < 40)
            {
                gpa[i] = 1.5;
                letterGrade[i] = 'D';
            }
            else if (a[i] >= 40 && a[i] < 60)
            {
                gpa[i] = 2;
                letterGrade[i] = 'C';
            }
            else if (a[i] >= 60 && a[i] < 80)
            {
                gpa[i] = 3;
                letterGrade[i] = 'B';
            }
            else if (a[i] >= 80 && a[i] <= 100)
            {
                gpa[i] = 4;
                letterGrade[i] = 'A';
            }
        }

        else
        {
            printf("**** Invalid Grade!!! ****");
            return 0;
        }
    }
    printf("\n\n\t\t\t***************");
    printf("\n\n\t\t\t   %s", studentNumber);
    printf("\n\n\t\t\t***************");
    printf("\n\n_________________________________________________________________\n");
    printf("|       Module      |    Alpha Grade    |    Grade score  \t|\n");

    TotalGpa = 0;
    for(i=0; i<12; i++)
    {
        printf("_________________________________________________________________\n");
        printf("|      Module %d     |        %c          |       %.2f\t\t|\n", i+1, letterGrade[i], gpa[i]);
        TotalGpa += gpa[i];
    }
    printf("_________________________________________________________________\n");

    FinalGpa = TotalGpa / 12;
    {
        printf("\nFinal GPA is %.2f\n", FinalGpa);
    }

    if(FinalGpa >= 1.66)
    {
        printf("\n***Congratulations!!! You Have Passed!!!***\n");
    }
    else
    {
        printf("\nSorry!!! but You have Failed, Thank you for your time...\n\n");
    }


    return 0;
}
