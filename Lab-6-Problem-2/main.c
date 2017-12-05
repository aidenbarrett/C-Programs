//
//  main.c
//  Lab 6 Problem 2
//  Aiden Barrett
//  B00075033
//  A program that prints a 2 digit number in words.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,f,s;


    printf("Enter 2 digit number between 20 and 99: \n");
        scanf("%d",&num);

        f = num/10;
        s = num %10;

    switch(f){
        case 2: printf("You entered the number twenty-");
        break;
        case 3: printf("You entered the number thirty-");
        break;
        case 4: printf("You entered the number forty-");
        break;
        case 5: printf("You entered the number fifty-");
        break;
        case 6: printf("You entered the number sixty-");
        break;
        case 7: printf("You entered the number seventy-");
        break;
        case 8: printf("You entered the number eighty-");
        break;
        case 9: printf("You entered the number ninty-");
        break;
    }
     switch (s){
        case 1: printf("one.\n");
        break;
        case 2: printf("two.\n");
        break;
        case 3: printf("three.\n");
        break;
        case 4: printf("four.\n");
        break;
        case 5: printf("five.\n");
        break;
        case 6: printf("six.\n");
        break;
        case 7: printf("seven.\n");
        break;
        case 8: printf("eight.\n");
        break;
        case 9: printf("nine.\n");
        break;
     }


    return 0;
}
