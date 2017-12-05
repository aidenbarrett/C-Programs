/* Practical Assignment Problem 3
// Author: Aiden Barrett
// ID: B00075033
// Date: 10/03/14
// Purpose: Program to test pythagorean triples.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;


    printf(":Please enter values for A, B and C:\n");
    scanf("%f%f%f",&a,&b,&c);

    pow(c,2)=(pow(a,2)+pow(b,2));

    if(c=a+b);
    {
        printf("Pythogorean Triple!%.2f\n\n", c);
    }
    else(c!=a+b);
    {
        printf("Not a Pythogorean!%.2f\n\n",c);
    }

    return 0;
}
