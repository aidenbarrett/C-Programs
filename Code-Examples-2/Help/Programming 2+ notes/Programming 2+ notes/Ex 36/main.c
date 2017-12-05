#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;                                   //creates int variables x and y
    int *ptr;                                   //creates int pointer variable ptr

    x = 0;                                      //initialises x as 0
    y = 0;                                      //initialises y as 0

    printf("The value of x is %d\n", x);        //prints out the value for x
    printf("\nThe value of y is %d\n", y);      //prints out the value for y

    printf("\nThe value of ptr is %p\n", ptr);  //prints out the values of ptr

    ptr = &x;                                   //initialises the variable ptr as the address of x
    *ptr = 10;                                  //pointer variable ptr is now equal to 10
    printf("\nThe new value of x is %d\n", x);  //prints out the new values of x

    ptr = &y;                                   //initialises the variable ptr as the address of y
    *ptr = 5;                                   //pointer variable ptr is now equal to 5
    printf("\nThe new value of y is %d\n", y);  //prints out the new values of y

    return 0;                                   //end program and return 0
}
