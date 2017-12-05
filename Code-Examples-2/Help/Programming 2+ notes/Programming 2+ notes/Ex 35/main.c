#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;                                          //creates int variable x
    int *p;                                         //creates int pointer variables p
    x = 5;                                          //initialises x as 5

    printf("The contents of x is %d\n", x);         //prints out the contents of x
    printf("\nThe addresss of x is %p\n", &x);      //prints out the address of x
    printf("\nThe contents of p is %p\n", p);       //prints out the contents of p

    p = &x;                                         //initialises the variable p as the address of x
    printf("\nThe contents of p is %p\n", p);       //prints out the contents of p

    *p = 10;                                        //pointer variable p is now equal to 10
    printf("\nThe new contents of x is %d\n", x);   //prints out the new contents of x

    printf("\nThe new contents of x is %d\n", *p);  //prints out the new contents of x using pointer variable p

    return 0;                                       //end program and return 0
}

