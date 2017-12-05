#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, w, intDivision, modulus;
    double realDivision;

    printf("Please enter the first number: ");
    scanf("%d", &x);

    printf("Please enter the second number: ");
    scanf("%d", &y);

    w = x*y;
    printf("\nThe product is: %d", w);

    intDivision = x/y;
    printf("\nThe integer division is: %d", intDivision);

    modulus = (x % y);
    printf("\nThe modulus is: %d", modulus);

    realDivision = (double)x/y;
    printf("\nThe real division: %.2f\n", realDivision);

    system("PAUSE");
    return 0;
}

