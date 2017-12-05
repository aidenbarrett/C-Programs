#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;

    printf("Please enter an Integer between 1 and 10 : ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
            printf("\nThe Roman Numeral equivalent of %d is => I\n", x);
            break;
        case 2:
            printf("\nThe Roman Numeral equivalent of %d is => II\n", x);
            break;
        case 3:
            printf("\nThe Roman Numeral equivalent of %d is => III\n", x);
            break;
        case 4:
            printf("\nThe Roman Numeral equivalent of %d is => IV\n", x);
            break;
        case 5:
            printf("\nThe Roman Numeral equivalent of %d is => V\n", x);
            break;
        case 6:
            printf("\nThe Roman Numeral equivalent of %d is => VI\n", x);
            break;
        case 7:
            printf("\nThe Roman Numeral equivalent of %d is => VII\n", x);
            break;
        case 8:
            printf("\nThe Roman Numeral equivalent of %d is => VIII\n", x);
            break;
        case 9:
            printf("\nThe Roman Numeral equivalent of %d is => IX\n", x);
            break;
        case 10:
            printf("\nThe Roman Numeral equivalent of %d is => X\n", x);
            break;
        default:
            printf("\n**** Invalid Number!!! ****\n");
            break;
    }
    return 0;
}
