#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;
    double average;

    printf("Please input 1st Number: ");
    scanf("%d", &x);
    printf("\nPlease input 2nd Number: ");
    scanf("%d", &y);

    average = (x + y)/ 2.0;
    printf("\nThe average is %.2f", average);

    return 0;
}
