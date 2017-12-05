#include <stdio.h>
#include <stdlib.h>

int add(int [], int );

int main()
{
    int a[5];
    int i, sum;

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

    sum = add(a, 5);

    printf("\n\nThe sum of elements => %d", sum);

    return 0;
}

int add(int b[], int sz)
{
    int i = 0;
    int total = 0;

    while(b[i] <= sz)
    {
        total += b[i]++;
    }
    return total;
}
