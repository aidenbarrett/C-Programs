#include <stdio.h>
#include <stdlib.h>

void swap(void);
int x, y;

int main()
{
   //prompt the user
    printf("*Please enter the first no.: ");
    scanf("%d", &x);

    printf("*Please enter the second no.: ");
    scanf("%d", &y);

    printf("=>The value of x is : %d\n", x);
    printf("=>The value of y is : %d\n\n", y);

    swap();

    printf("=>The value of x is : %d\n", x);
    printf("=>The value of y is : %d\n\n", y);

    return 0;
}

void swap(void)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
