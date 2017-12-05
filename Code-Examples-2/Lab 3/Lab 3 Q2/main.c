//
//  main.c
//  Lab 3 Problem 2
//  Aiden Barrett
//  B00075033
//  A program which using functions to return 1 or 0.
//

#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n);  // Declaration

int main()                       // Main section
{

    int x,y,n;

    printf("Enter a number for x and y and n: \n");
    scanf("%d%d%d",&x,&y,&n);

    printf("Function returns %d",check(x,y,n));

    return 0;
}

int check(int x, int y, int n)   // Function
{
    if((x && y >= 0) && (x && y <= n -1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
