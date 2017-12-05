#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letter;

    printf("Please enter in a letter in lowercase : ");
    scanf("%c",&letter);

    printf("\nThe uppercase version of the letter is ** %c ** \n", letter - 32);
    printf("\nThank you and Goodbye...\n");

    return 0;
}
