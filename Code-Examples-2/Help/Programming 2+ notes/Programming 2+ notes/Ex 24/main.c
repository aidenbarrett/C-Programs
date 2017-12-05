#include <stdio.h>
#include <stdlib.h>

void rectangleArea(int length, int breadth);

int main(void)
{
    int x;
    int y;

    while(1)
    {
        //prompt the user
        printf("Please enter the length of the side: ");
        scanf("%d", &x);

        printf("Please enter the breadth of the side: ");
        scanf("%d", &y);

        rectangleArea(x, y);
    }


    return 0;
}


void rectangleArea(int length, int breadth)
{
    int area;

    area = length * breadth;

    printf("The area is :%d\n\n", area);

    return;
}




