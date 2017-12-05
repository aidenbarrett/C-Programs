#include <stdio.h>
#include <stdlib.h>

int main()
{

    char x;

    printf("Please enter a Grade letter : ");
    scanf("%c",&x);

    switch(x)
    {
        case 'A': case 'a':
            printf("\nThe Grade Point Value of %c is => 4.0\n", x);
            break;
        case 'B': case 'b':
            printf("\nThe Grade Point Value of %c is => 3.0\n", x);
            break;
        case 'C': case 'c':
            printf("\nThe Grade Point Value of %c is => 2.0\n", x);
            break;
        case 'D': case 'd':
            printf("\nThe Grade Point Value of %c is => 1.5\n", x);
            break;
        case 'F': case 'f':
            printf("\nThe Grade Point Value of %c is => 0.0\n", x);
            break;
        default:
            printf("\n**** Invalid Grade Letter!!! ****\n");
            break;
    }

    return 0;
}
