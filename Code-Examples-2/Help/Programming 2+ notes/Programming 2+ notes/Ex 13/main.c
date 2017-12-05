#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double y;

    printf("Please enter in an Integer: ");
    scanf("%d",&x);

    if(x==0)
    {
        printf("\t=>The value is False\n");
    }
    else
    {
        printf("\t=>The value is True\n");
    }

    printf("\nPlease enter in a Double: ");
    scanf("%lf",&y);

    if(y==0.0)
    {
        printf("\t=>The value is False\n");
    }
    else
    {
        printf("\t=>The value is True\n");
    }

    return 0;
}
