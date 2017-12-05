#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i;

    for(i =0; i < 10; i++)
    {
        printf("Please enter a number %d: ", i + 1);
        scanf("%d",&a[i]);
    }

    for(i =0; i < 10; i++)
    {
        printf("\nThe number %d, is %d", i+1, a[i]);
    }
    return 0;
}
