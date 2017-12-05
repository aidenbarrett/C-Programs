#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, logANDing, logORing, bitANDing, bitORing;

    printf("Please enter the first number: ");
    scanf("%d", &x);

    printf("Please enter the second number: ");
    scanf("%d", &y);


    logANDing = x&&y;
    printf("\nThe logical ANDing the two numbers is: %d", logANDing);

    logORing = x||y;
    printf("\nThe logical ORing the two numbers is: %d", logORing);

    bitANDing = (x & y);
    printf("\nThe bitwise ANDing the two numbers is: %d", bitANDing);

    bitORing = (x|y);
    printf("\nThe bitwise ORing of the numbers is: %d\n\n", bitORing);

    return 0;
}

