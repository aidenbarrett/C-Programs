#include <stdio.h>
#include <stdlib.h>

void changeNumbers(int* , int );

int main()
{
    int a[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Please enter a number %d: ", i + 1);
        scanf("%d",&a[i]);
    }

    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nThe number %d => is %d", i+1, a[i]);
    }

    changeNumbers(a, 5);

    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nThe number %d => is %d", i+1, a[i]);
    }

    return 0;
}

void changeNumbers(int *ptr, int sz)
{
    int i;

    for(i = 0; i < sz; i++)
    {
        *ptr++ *= 10;
    }

    return;
}

