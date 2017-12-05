#include <stdio.h>
#include <stdlib.h>

int gradeCheck(int num);

int main()
{
    int a, check;
    char letterGrade;

    while(1)
    {
        do
        {
            printf("Please enter a grade between 0 and 100 : ");
            scanf("%d",&a);

            check = gradeCheck(a);

            if(check == 0)
            {
                printf("\n**** Invalid Grade!!! ****\n");
                fflush(stdin);
            }
        }
        while(check != 1);

        if (a >= 0 && a < 35)
        {
            letterGrade = 'F';
        }
        else if (a >= 35 && a < 40)
        {
            letterGrade = 'D';
        }
        else if (a >= 40 && a < 55)
        {
            letterGrade = 'C';
        }
        else if (a >= 55 && a < 80)
        {
            letterGrade = 'B';
        }
        else if (a >= 80 && a <= 100)
        {
            letterGrade = 'A';
        }

        printf("\nThe associated Grade Letter is %c\n", letterGrade);
    }
    return 0;
}

int gradeCheck(int num)
{
    int temp;

        if(num <= 100 && num >= 0)
        {
            temp = 1;
        }
        else
        {
            temp = 0;
        }

    return temp;
}
