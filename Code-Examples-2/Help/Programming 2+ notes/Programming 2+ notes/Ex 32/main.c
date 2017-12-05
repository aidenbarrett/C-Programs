#include <stdio.h>
#include <stdlib.h>

int swap(int poram1, int poram2);

int main()
{
    int num1, num2;

    while(1)
    {
        //prompt the user
        printf("Please enter num1: ");
        scanf("%d", &num1);
        printf("Please enter num2: ");
        scanf("%d", &num2);

        printf("num1 contains: %d\n", num1);
        printf("num2 contains: %d\n\n", num2);

        swap(num1, num2);

        printf("num1 contains: %d\n", num1);
        printf("num2 contains: %d\n\n", num2);
    }
    return 0;
}

int swap(int poram1, int poram2)
{
    int temp;

    printf("poram1 contains: %d\n", poram1);
    printf("poram2 contains: %d\n\n", poram2);

    temp = poram1;
    poram1 = poram2;
    poram2 = temp;

    printf("poram1 contains: %d\n", poram1);
    printf("poram2 contains: %d\n\n", poram2);

    return 0;
}
