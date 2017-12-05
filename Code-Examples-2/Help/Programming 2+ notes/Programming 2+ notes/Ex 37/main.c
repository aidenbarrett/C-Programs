#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, temp;                             //creates int variables a, b, and temp
    int *ptr, *p;                               //creates int pointer variables *ptr and *p
    p = &a;                                     //initialises the variable p as the address of a
    ptr = &b;                                   //initialises the variable ptr as the address of b

    printf("Please enter a value for a: ");     //prompt user to enter value for a
    scanf("%d",&a);
    printf("\nPlease enter a value for b: ");   //prompt user to enter value for b
    scanf("%d",&b);

                                                //swaps the value of a and b using pointer variables
    temp = *p;                                  //temp is equal to pointer variable p
    *p = *ptr;                                  //pointer variable p is equal to pointer variable ptr
    *ptr = temp;                                //pointer variable ptr is now equal to temp

    printf("\nThe new value of a: %d\n", a);    //prints out the new values of a
    printf("\nThe new value of b: %d\n", b);    //prints out the new values of b
    return 0;                                   //end program and return 0
}
