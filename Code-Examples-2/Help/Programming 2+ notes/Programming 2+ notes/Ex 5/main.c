#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;

    printf("Please input 1st Number: ");
    scanf("%d", &x);
    printf("\nPlease input 2nd Number: ");
    scanf("%d", &y);

    if (x>y)
    {
        printf("\nThe 1st number: %d is the biggest\n", x);
    }

    if (x<y)
    {
        printf("\nThe 2nd number: %d is the biggest\n", y);
    }

    else
    {
        printf("\nBoth numbers are equal!.\n");
    }

    return 0;
}
