#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
    int x, y, a, b, c, num;

    printf("**Please choose an input format**\n\n");

    printf("1 -> Hexidecimal\n");
    printf("2 -> Octal\n");
    printf("3 -> Decimal\n");


    printf("\nPlease enter a choice from above: ");
    scanf("%d", &x);

    if(x == 1)
    {
        printf("\n\n=> Please enter a hex number: ");
        scanf("%x", &a);
        num = a;
    }

    else if(x == 2)
    {
        printf("\n\n=> Please enter an octal number: ");
        scanf("%o", &b);
        num = b;
    }

    else if(x == 3)
    {
        printf("\n\n=> Please enter a decimal number: ");
        scanf("%u", &c);
        num = c;
    }

    else
    {
        printf("\n\nYou have entered an invalid number!!!\n");
        return 0;
    }

    printf("\nPlease choose an output format: \n\n");

    printf("1 -> Hexidecimal\n");
    printf("2 -> Octal\n");
    printf("3 -> Decimal\n");

    printf("\nPlease enter a choice from above: ");
    scanf("%d", &y);

    if(y == 1)
    {
        printf("\n\n=> The number you entered in Hexidecimal is: %x\n\n\n\n", num);
    }

    else if(y == 2)
    {
        printf("\n\n=> The number you entered in Octal is: %o\n\n\n\n", num);
    }

    else if(y == 3)
    {
        printf("\n\n=> The number you entered in Decimal is: %u\n\n\n\n", num);
    }

    else
    {
        printf("\n\nYou have entered an invalid number!!!\n");
        return 0;
    }

    }
    return 0;
}
