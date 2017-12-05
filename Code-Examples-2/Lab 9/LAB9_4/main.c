/* Lab 9 Part 4
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 03/12/2014
Write a function that accepts two strings (of a mix of upper
and lower case values) and converts string 1 to uppercase
characters and string 2 to lowercase values. The function
should use a pointer to access the array index in each case
and print out both strings to the screen to confirm the
conversion has taken place.
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char string1[10];
    char string2[10];


    printf("Enter a string: \n");
    scanf("%s", string1);

    printf("Enter a string: \n");
    scanf("%s", string2);

    printf("%s, %s\n", string1, string2);

    for(i=0; i<strlen(string1); i++)
    {
        if(islower(*(string1+i)))
        {
            *(string1+i) -= 32;
        }
    }

    for(i=0; i<strlen(string2); i++)
    {
        if(isupper(*(string2+i)))
        {
            *(string2+i) += 32;
        }
    }


    printf("%s, %s\n", string1, string2);

    return 0;
}
