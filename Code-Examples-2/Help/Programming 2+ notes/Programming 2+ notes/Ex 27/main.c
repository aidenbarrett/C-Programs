#include <stdio.h>
#include <stdlib.h>

int raiseToPower(int b, int c);

int main()
{
    int x;
    int y;
    int Square;

    while(1)
    {
        //prompt the user
        printf("Please enter the first no.: ");
        scanf("%d", &x);

        printf("Please enter the second no.: ");
        scanf("%d", &y);

        Square = raiseToPower(x, y);

        printf("The answer is : %d\n\n", Square);
    }

    return 0;
}

int raiseToPower(int b, int c)
{
    int ans = b;
    int i;

    for(i = 1; i < c; i++)
    {
        b = b * ans;
    }

    ans = b;
    return ans;
}
