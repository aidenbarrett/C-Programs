#include <stdio.h>
#include <stdlib.h>

#define sz 10

int smallestNo(int *ptr, int size);
int largestNo(int arr[], int size);

int main()
{
    int a[sz];
    int i, smallest, largest;

    for(i = 0; i < sz; i++)
    {
        printf("Please enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n");
    for(i = 0; i < sz; i++)
    {
        printf("\nThe number %d => is %d", i+1, a[i]);
    }

    smallest = smallestNo(a, sz);
    largest = largestNo(a, sz);

    printf("\n\nThe Largest Number => %d", largest);
    printf("\n\nThe Smallest Number => %d\n", smallest);

    return 0;
}

int smallestNo(int *ptr, int size)
{
    int i;
    int small;

    small = ptr[0];

    for(i = 0; i < size; i++)
    {
        if(small > ptr[i])
        {
            small = ptr[i];
        }
    }
    return small;
}

int largestNo(int arr[], int size)
{
    int i;
    int large;

    large = arr[0];

    for(i = 0; i < size; i++)
    {
        if(large < arr[i])
        {
            large = arr[i];
        }
    }
    return large;
}
