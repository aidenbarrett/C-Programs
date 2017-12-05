// Lab Test 2
// Question 1
// Aiden Barrett
// B00075033
// A program that prints out numbers in an array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, data[21]={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40};
    int sum=0;

    for (i=0; i<21;i++){
   printf("\nArray: %d\n", (data[i]));

   sum = sum + (data[i]);
}

   printf("\n\nThe sum is of all numbers is: %d\n", sum);

    return 0;
}


