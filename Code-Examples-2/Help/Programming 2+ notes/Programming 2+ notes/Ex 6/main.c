#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, count;
    count=0;

    printf("Please input a number: ");
    scanf("%d", &x);

    while (count < x)
    {
        count++;
        printf("Hello world!\n");
    }

    return 0;
}
