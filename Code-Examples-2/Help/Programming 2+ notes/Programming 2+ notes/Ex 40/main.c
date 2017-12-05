#include <stdio.h>
#include <stdlib.h>

int swap(int *param1, int *param2);                             //fuction prototype

int main()
{
    int num1, num2;                                             //creates int variables num1 and num2

    while(1)                                                    //while loop
    {
        printf("Please enter num1: ");                          //Promts the user to enter values for num1
        scanf("%d", &num1);
        printf("Please enter num2: ");                          //Promts the user to enter values for num2
        scanf("%d", &num2);

        printf("num1 contains: %d\n", num1);                    //prints out the values for num1
        printf("num2 contains: %d\n\n", num2);                  //prints out the values for num2

        swap(&num1, &num2);                                     //function call with the addresses of num1 and num2

        printf("num1 contains: %d\n", num1);                    //prints out the values for num1
        printf("num2 contains: %d\n\n", num2);                  //prints out the values for num2
    }
    return 0;                                                   //end program and return 0
}

int swap(int *param1, int *param2)                              //swap fuction
{
    int temp;                                                   //creates int variable temp

    printf("The thing that param1 points to: %d\n", *param1);   //prints out the values for num1
    printf("The thing that param2 points to: %d\n\n", *param2); //prints out the values for num1

                                                                //swaps the value of num1 and num2 using pointer variables
    temp = *param1;                                             //temp is equal to pointer variable param1
    *param1 = *param2;                                          //pointer variable param1 is equal to pointer variable param2
    *param2 = temp;                                             //pointer variable param2 is now equal to temp

    printf("The thing that poram1 points to: %d\n", *param1);   //prints out the swapped values for pointer variable param1
    printf("The thing that poram2 points to: %d\n\n", *param2); //prints out the swapped values for pointer variable param2

    return 0;                                                     //return to main
}
