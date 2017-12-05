/* Practical Assignment Problem 1
// Author: Aiden Barrett
// ID: B00075033
// Date: 10/03/14
// Purpose: Program to add 5% interest to amount over 15 years.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float p,r,a;


    printf("Enter an amount (€):\n");
    scanf("%f, &p\n");

    r=0.05

    for(n=1;n<=15;i++)//initializer, loops until greater than 15, increments by 1 each time)
    {

    a=p(1+r)*pow(n);

    printf("Year%.2f\t\Amount on Deposit (€)%.2f",n,a);
    }
    return 0;
}
