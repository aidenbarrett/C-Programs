#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Please enter a grade between 0 and 100 : ");
    scanf("%d",&a);

    if(a > 100)
    {
        printf("\n**** Invalid Grade!!! ****\n");
        return 0;
    }
    else if (a > 80)
    {
        printf("\nThe associated Grade Letter is A\n");
    }
    else if (a > 70)
    {
        printf("\nThe associated Grade Letter is B+\n");
    }
    else if(a > 60)
    {
        printf("\nThe associated Grade Letter is B\n");
    }
    else if (a > 55)
    {
        printf("\nThe associated Grade Letter is B-\n");
    }
    else if (a > 50)
    {
        printf("\nThe associated Grade Letter is C+\n");
    }
    else if(a > 40)
    {
        printf("\nThe associated Grade Letter is C\n");
    }
    else if (a > 35)
    {
        printf("\nThe associated Grade Letter is D\n");
    }
    else if (a > 0)
    {
        printf("\nThe associated Grade Letter is F\n");
    }

    return 0;
}
