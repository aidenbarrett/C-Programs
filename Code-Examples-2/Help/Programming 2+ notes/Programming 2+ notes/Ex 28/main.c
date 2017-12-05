#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int SumOfBoth(int d, int e);
int ProductOfBoth(int f, int g);
double raiseToPower(int b, int c);
double SqrtAB(int h);


int main()
{
    int x;
    int y;
    int Sum, Product;
    double SqrtA, SqrtB, Square;

    while(1)
    {
        //prompt the user
        printf("*Please enter the first no.: ");
        scanf("%d", &x);

        printf("*Please enter the second no.: ");
        scanf("%d", &y);

        Sum = SumOfBoth(x, y);
        Product = ProductOfBoth(x, y);
        Square = raiseToPower(x, y);
        SqrtA = SqrtAB(x);
        SqrtB = SqrtAB(y);


        printf("=>The Sum is : %d\n\n", Sum);
        printf("=>The Product is : %d\n\n", Product);
        printf("=>The Square of %d by %d : %.2lf\n\n",x ,y ,Square);
        printf("=>The Square root of %d and %d is : %.2lf and %.2lf respectively\n\n", x, y, SqrtA, SqrtB);
    }

    return 0;
}


int SumOfBoth(int d, int e)
{
    int ans;

    ans = d + e;
    return ans;
}



int ProductOfBoth(int f, int g)
{
    int ans;

    ans = f * g;
    return ans;
}


double raiseToPower(int b, int c)
{
    int ans = b;
    int i;

    for(i = 1; i < c; i++)
    {
        b = b * ans;
    }

    ans = b;
    return ans;
}


double SqrtAB(int h)
{
    double ans = sqrt(h);
    return ans;
}



