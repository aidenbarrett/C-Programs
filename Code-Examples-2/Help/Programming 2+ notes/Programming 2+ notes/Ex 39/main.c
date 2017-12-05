#include <stdio.h>
#include <stdlib.h>

void raiseToPower(int *ptr, int power);         //function prototype

int main()
{
    int a, b;                                   //creates int variables a and b

    printf("Please enter a value for a: ");     //prompt user to enter value for a
    scanf("%d",&a);
    printf("\nPlease enter a value for b: ");   //prompt user to enter value for b
    scanf("%d",&b);


    raiseToPower(&a, b);                        //function call

    printf("\nThe Answer gotten is %d\n", a);   //prints out the Ans from the function

    return 0;                                   //end program and return 0
}

void raiseToPower(int *ptr, int power)          //RaiseToPower function
{
    int ans = *ptr;                             //creates int variable ans and equals it to pointer variable ptr
    int i;                                      //creates int variable i

    for(i = 1 ; i < power; i++)                 //formula for finding the raiseToPower
    {
        *ptr = *ptr * ans;
    }
    return;                                     //return to main
}
