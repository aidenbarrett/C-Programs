#include <stdio.h>
#include <stdlib.h>

int getInteger(void);

int main()
{
    int temp;

    while(1)
    {
        //prompt the user
        printf("Please enter an Integer: ");
        temp = getInteger();
        printf("\nThe Integer is: %d\n\n", temp);
    }
    return 0;
}

int getInteger(void)
{
    int myInt, scanResult;

    scanResult = scanf("%d", &myInt);

    while(scanResult == 0)
    {
        printf("ERROR:\nPlease enter an integer: ");
        fflush(stdin);
        scanResult = scanf("%d", &myInt);
    }

    fflush(stdin);
    return myInt;
}
