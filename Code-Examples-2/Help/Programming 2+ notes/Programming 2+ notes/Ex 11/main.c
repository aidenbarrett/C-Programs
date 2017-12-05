#include <stdio.h>
#include <stdlib.h>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

int main()
{
    int x;

    printf("Please enter a number between 1 and 7: ");
    scanf("%d",&x);

    if(x==MONDAY)
    {
        printf("\t=> *Monday*\n");
    }

    else if(x==TUESDAY)
    {
        printf("\t=> *Tuesday*\n");
    }

    else if(x==WEDNESDAY)
    {
        printf("\t=> *Wednesday*\n");
    }

    else if(x==THURSDAY)
    {
        printf("\t=> *Thursday*\n");
    }

    else if(x==FRIDAY)
    {
        printf("\t=> *Friday*\n");
    }

    else if(x==SATURDAY)
    {
        printf("\t=> *Saturday*\n");
    }

    else if(x==SUNDAY)
    {
        printf("\t=> *Sunday*\n");
    }
    else
    {
        printf("\nYou have entered an invalid number!!!\n");
    }

    return 0;

}
