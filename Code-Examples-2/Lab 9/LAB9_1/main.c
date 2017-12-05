/* Lab 9 Part 1
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 03/12/2014
Uses a macro 'DOUBLE(x)' which returns 2*x, but shows that this
macro is not entirely correct. Then uses a second macro 'DOUBLEFIX'
which returns (2)*(x), and shows that this returns correct answers.
------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#define DOUBLE(x) 2*x
#define DOUBLEFIX(x) (2)*(x)

int main()
{
    /*'x' is a variable to store the values returned by the macros*/
    double x;

    /*Displays the 2 macro definitions to the user*/
    printf("#define DOUBLE(x) 2*x\n");
    printf("#define DOUBLEFIX(x) (2)*(x)\n\n");

    /*Calculates and displays the 3 tests for DOUBLE(),
    showing the problems with the macro*/
    x = DOUBLE(1+2);
    printf("DOUBLE(1+2)\t=\t%.2f\n", x);

    x = DOUBLE(2);
    printf("DOUBLE(2)\t=\t%.2f\n", x);

    x = 4/(DOUBLE(2));
    printf("4/DOUBLE(2)\t=\t%.2f\n", x);

    printf("\n\n");

    /*Calculates and displays the 3 tests for DOUBLEFIX(),
    showing that the 2nd macro is the correct way*/
    x = DOUBLEFIX(1+2);
    printf("DOUBLEFIX(1+2)\t=\t%.2f\n", x);

    x = DOUBLEFIX(2);
    printf("DOUBLEFIX(2)\t=\t%.2f\n", x);

    x = 4/(DOUBLEFIX(2));
    printf("4/DOUBLEFIX(2)\t=\t%.2f\n", x);

    return 0;
}
