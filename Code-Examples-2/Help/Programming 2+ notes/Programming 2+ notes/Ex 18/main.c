#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;

    printf("Please enter an Integer between 1 and 10 : ");
    scanf("%d",&x);

    if(x >= 0 && x <= 10)
    {
        if (x == 1)
        {
            printf("\nThe Roman Numeral equivalent of %d is => I\n", x);
        }
        else if (x == 2)
        {
            printf("\nThe Roman Numeral equivalent of %d is => II\n", x);
        }
        else if (x == 3)
        {
            printf("\nThe Roman Numeral equivalent of %d is => III\n", x);
        }
        else if (x == 4)
        {
            printf("\nThe Roman Numeral equivalent of %d is => IV\n", x);
        }
        else if (x == 5)
        {
            printf("\nThe Roman Numeral equivalent of %d is => V\n", x);
        }
        else if (x == 6)
        {
            printf("\nThe Roman Numeral equivalent of %d is => VI\n", x);
        }
        else if (x ==7)
        {
            printf("\nThe Roman Numeral equivalent of %d is => VII\n", x);
        }
        else if (x == 8)
        {
            printf("\nThe Roman Numeral equivalent of %d is => VIII\n", x);
        }
        else if (x == 9)
        {
            printf("\nThe Roman Numeral equivalent of %d is => IX\n", x);
        }
        else if (x == 10)
        {
            printf("\nThe Roman Numeral equivalent of %d is => X\n", x);
        }
    }
    else
    {
        printf("\n**** Invalid Number!!! ****\n");
        return 0;
    }

    return 0;
}
