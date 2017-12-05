#include <stdio.h>
#include <stdlib.h>


//function prototype
void myFirstFunction(void);

//function prototype
void mySecondFunction(void);

int main(void)
{
    printf("I am in main!\n");

    //function call
    myFirstFunction();

    printf("I am back in main!\n");

    //function call
    myFirstFunction();

    printf("I am back in main again!\n");

    //function call
    mySecondFunction();

    printf("Finally we're done!\n");

    return 0;
}


//function definition
void myFirstFunction(void)
{
    printf("I am in myFirstFunction!\n");

    //function call
    mySecondFunction();

    printf("I am back in myFirstFunction!\n");

    return;
}

//function definition
void mySecondFunction(void)
{
    printf("I am in mySecondFunction!\n");

    return;
}

