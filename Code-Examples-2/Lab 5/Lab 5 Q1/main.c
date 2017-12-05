//
//  main.c
//  Lab 5 Problem 1
//  Aiden Barrett
//  B00075033
//  A program using pointers and arrays to switch values
//

#include <stdio.h>
#include <stdlib.h>

int a[] = {5,15,34,54,14,2,52,72};   // Declaration
int *p = &a[1], *q = &a[5];

int main()
{

    printf("The value of *(p+3) is: %d\n\n",*(p+3));
    printf("The value of *(q-3) is: %d\n\n",*(q-3));
    printf("The value of q-p is: %d\n\n",q - p);

    if(p < q){
    printf("Condition p < q is: True\n\n");

    }else printf("Condition p < q is: False\n\n");

    if(*p < *q){
    printf("Condition *p < *q is: True\n\n");

    }else printf("Condition *p < *q is: False\n\n");


    return 0;
}
