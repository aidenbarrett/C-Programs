#include <stdio.h>
#include <stdlib.h>

void printMessage(void);

char x;
int y = 0;

int main()
{
    char x;
    while(1)
    {
        printf("Do you want to see the message?");
        scanf("%c", &x);
        fflush(stdin);

        if(x == 'y' || x == 'Y')
        {
            y += 1;
            printMessage();
        }
        else if(x == 'n' || x =='N')
        {
            printf("\n\n=> Thank you and Goodbye\n\n");
            exit (0);
        }
        else
        {
            printf("\n\nError: Invalid Input, Please enter in 'Y' or 'N'!\n");
            fflush(stdin);
        }
    }
    return 0;
}

void printMessage(void)
{
    printf("\nThis message has been printed %d  times \n\n", y);
}

