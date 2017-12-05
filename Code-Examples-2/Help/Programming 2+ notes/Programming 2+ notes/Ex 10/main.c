#include <stdio.h>
#include <stdlib.h>

#include <float.h>

int main(int argc, char *argv[])
{
    double v, w, x, y, z;

    printf("The minimum value you can store in a float is: \n%f\n\n", FLT_MIN);
    printf("The maximum value you can store in a float is: \n%f\n\n", FLT_MAX);

    printf("The minimum value you can store in a double is: \n%lf\n\n", DBL_MIN);
    printf("The maximum value you can store in a double is: \n%lf\n\n", DBL_MAX);


    printf("Please enter 5 real numbers: \n");

    scanf("%lf",&v);
    scanf("%lf",&w);
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);

    printf("\n\n_________________________________________\n");
    printf("|Displayed below are the numbers stored |\n");

    printf("|\t\t%0.2f\t\t\t| \n|\t\t%0.2f\t\t\t| \n|\t\t%0.2f\t\t\t| \n|\t\t%0.2f\t\t\t| \n|\t\t%0.2f\t\t\t|",v,w,x,y,z);

    printf("\n_________________________________________\n\n");


    system("PAUSE");
    return 0;
}




