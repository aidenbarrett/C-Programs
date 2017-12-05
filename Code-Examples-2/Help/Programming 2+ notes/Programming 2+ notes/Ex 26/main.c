#include <stdio.h>
#include <stdlib.h>

double rectangleArea(int length, double breadth);

int main(int argc, char *argv[])
{
    int x;
    double y;
    double area;

    while(1)
    {
        //prompt the user
        printf("Please enter the length of the side: ");
        scanf("%d", &x);

        printf("Please enter the breadth of the side: ");
        scanf("%lf", &y);

        area = rectangleArea(x, y);

        printf("The area is : %.2lf\n\n", area);
    }

    return 0;
}

double rectangleArea(int length, double breadth)
{
    double a;

    a = length * breadth;

    return a;
}




