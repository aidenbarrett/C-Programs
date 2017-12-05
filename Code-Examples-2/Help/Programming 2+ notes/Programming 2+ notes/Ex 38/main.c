#include <stdio.h>
#include <stdlib.h>

void square(int *p);                                  //function prototype

int main()
{
    int x;                                            //creates int variables x
    printf("Please enter in a value for x: ");        //prompt user to enter value for a
    scanf("%d", &x);

    printf("The value for x: %d\n", x);               //prints out the values for x

    square(&x);                                       //calls the function and sends address of x to it
    printf("The changed value for x: %d\n", x);       //prints out the changed value for x

    return 0;                                         //end program and return 0
}

void square(int *p)                                    //square function
{
    *p *= *p;                                          //multiplies pointer variable p by itself
    printf("\nThe changed value of *p = %d\n", *p);    //prints out the changed value of pointer variable p
}
