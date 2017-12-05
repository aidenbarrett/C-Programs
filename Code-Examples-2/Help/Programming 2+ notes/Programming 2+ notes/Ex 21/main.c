#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;

    do
    {
        printf("Please enter a Letter: ");
        scanf("%c", &x);
        fflush(stdin);

        printf("The Letter entered was: %c\n\n", x);

    }
    while (1==1);

    return 0;
}
