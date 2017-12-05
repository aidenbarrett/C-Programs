#include <stdio.h>
#include <stdlib.h>

void compare_v1(int x, int y);                  //function prototype
void compare_v2(int *ptr, int *p);              //function prototype

int main()                                      //main function
{
    int a, b;                                   //creates int variables a and b

    printf("Please enter a value for a: ");     //prompt user to enter value for a
    scanf("%d",&a);
    printf("\nPlease enter a value for b: ");   //prompt user to enter value for b
    scanf("%d",&b);

    compare_v1(a, b);                           //function call using call by value
    compare_v2(&a, &b);                         //function call using call by reference
    return 0;                                   //end program and return 0
}


void compare_v1(int x, int y)                                         //compare function using call by value with variables x and y
{
    if(x > y)                                                         //if statement that does expression if condition is true
    {
        printf("\t=> %d is the Bigger number of the two\n\n", x);     //prints if variable x is bigger variable y
    }
    if(y > x)                                                         //if statement that does expression if condition is true
    {
        printf("\t=> %d is the Bigger number of the two\n\n", y);     //prints if variable y is bigger variable x
    }
    if(x == y)                                                        //if statement that does expression if condition is true
    {
        printf("\t=> %d is equal to %d\n\n", x, y);                   //prints the if the number are equal
    }
     return;                                                          //return to main
}


void compare_v2(int *ptr, int *p)                                     //compare function using call by reference with pointer variables *ptr and *p
{
    if(*ptr > *p)                                                     //if statement that does statement if condition is true
    {
        printf("\t=> %d is the Bigger number of the two\n", *ptr);    //prints if pointer variable ptr is bigger pointer variable p
    }
    if(*p > *ptr)                                                     //if statement that does statement if condition is true
    {
        printf("\t=> %d is the Bigger number of the two\n", *p);      //prints if pointer variable p is bigger pointer variable ptr
    }
    if(*ptr == *p)                                                    //if statement that does statement if condition is true
    {
        printf("\t=> %d is equal to %d\n", *ptr, *p);                 //prints the if the number are equal
    }
     return;                                                          //return back to main
}
