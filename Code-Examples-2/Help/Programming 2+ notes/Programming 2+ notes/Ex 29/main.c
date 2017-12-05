#include <stdio.h>
#include <stdlib.h>

char getCharacter(void);

int main()
{
    char temp;

    while(1)
    {
        //prompt the user
        printf("Please enter a character: ");

        temp = getCharacter();

        printf("The inputed character was: %c\n\n", temp);
    }
    return 0;
}

char getCharacter(void)
{
    char myChar;

    scanf("%c", &myChar);
    fflush(stdin);

    return myChar;
}
