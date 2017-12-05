#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10];
    int i;

    for(i =0; i < 10; i++)
    {
        printf("Please enter a number %d: ", i + 1);
        scanf("%d",&a[i]);
    }

    for(i =0; i < 10; i++)
    {
        b[9 - i] = a[i];
    }

    for(i =0; i < 10; i++)
    {
        printf("\nThe number %d, is %d", i+1, b[i]);
    }
    return 0;
}
