/* Lab 8 Part 4
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 26/11/2014
Prompts the user to pick an option int, char, double or float
and outputs to the screen a ‘*’ for each byte of memory the
respective datatype requires.
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef enum{INT, CHAR, DOUBLE, FLOAT, EXIT} choice;//enum for the user input

void print_size(int);

int main()
{
    int input;

    while(1)
    {
        printf("Which datatype would you like to learn about?\n");
        printf("(1)\tint\n");
        printf("(2)\tchar\n");
        printf("(3)\tdouble\n");
        printf("(4)\tfloat\n");
        printf("(5)\tEXIT\n");

        scanf("%d", &input);
        print_size(input);
    }

	return 0;
}

void print_size(int num)
{
    int i, answer;

    switch (num-1)
    {
    	case INT:
            answer = sizeof(int);
            printf("\nsizeof(int) = %d bytes\n\n", answer);
            for (i=0; i<answer; i++)
            {
                printf("*");
            }
            printf("\n\n");
    		break;
        case CHAR:
            answer = sizeof(char);
            printf("\nsizeof(char) = %d bytes\n\n", answer);
            for (i=0; i<answer; i++)
            {
                printf("*");
            }
            printf("\n\n");
            break;
        case DOUBLE:
            answer = sizeof(double);
            printf("\nsizeof(double) = %d bytes\n\n", answer);
            for (i=0; i<answer; i++)
            {
                printf("*");
            }
            printf("\n\n");
            break;
        case FLOAT:
            answer = sizeof(float);
            printf("\nsizeof(float) = %d bytes\n\n", answer);
            for (i=0; i<answer; i++)
            {
                printf("*");
            }
            printf("\n\n");
            break;
        case EXIT:
            printf("\n\nOK bye\n\n");
            exit(1);
    	default:
    		break;
    }
}
