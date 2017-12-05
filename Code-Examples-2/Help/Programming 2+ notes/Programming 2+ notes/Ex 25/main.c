#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

double circleArea(double r);

int main()
{

    double radius, area;

    printf("Please enter the radius: \n");
    scanf("%lf", &radius);

    area = circleArea(radius);

    printf("the area of the circle is %.2lf\n\n", area);

    return 0;
}

double circleArea(double r)
{
    double a;

    a = PI * r * r;

    return a;

}
