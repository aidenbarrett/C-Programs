#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Please enter a grade between 0 and 100 : ");
    scanf("%d",&a);

    if (a < 35)
    {
        printf("\nThe associated Grade Letter is F\n");
    }
    if (a >= 35 && a < 40)
    {
        printf("\nThe associated Grade Letter is D\n");
    }
    if (a >= 40 && a < 50)
    {
        printf("\nThe associated Grade Letter is C\n");
    }
    if (a >= 50 && a < 55)
    {
        printf("\nThe associated Grade Letter is C+\n");
    }
    if (a >= 55 && a < 60)
    {
        printf("\nThe associated Grade Letter is B-\n");
    }
    if (a >= 60 && a < 70)
    {
        printf("\nThe associated Grade Letter is B\n");
    }
    if (a >= 70 && a < 80)
    {
        printf("\nThe associated Grade Letter is B+\n");
    }
    if (a >= 80 && a <= 100)
    {
        printf("\nThe associated Grade Letter is A\n");
    }
    if (a < 0 || a > 100)
    {
        printf("\n**** Invalid Grade!!! ****\n");
        return 0;
    }

    return 0;
}

