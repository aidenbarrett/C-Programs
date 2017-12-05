#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y;

    printf("Please enter the first Integer: ");
    scanf("%d", &x);

    printf("Please enter the second Integer: ");
    scanf("%d", &y);

    if(x < y)
    {
        printf("\t=> %d is less than %d\n", x, y);
    }
    if(x <= y)
    {
        printf("\t=> %d is less than OR equal to %d\n",x ,y);
    }
    if(x > y)
    {
        printf("\t=> %d is greater than %d\n",x, y);
    }
    if(x >= y)
    {
        printf("\t=> %d is greater than OR equal to %d\n",x ,y);
    }
    if(x == y)
    {
        printf("\t=> %d is equal to %d\n",x ,y);
    }
    if(x != y)
    {
        printf("\t=> %d is not equal to %d\n",x ,y);
    }
    return 0;

}
