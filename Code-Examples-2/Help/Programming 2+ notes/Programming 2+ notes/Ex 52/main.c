#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure Template
struct Complex
{
    int real;
    int imag;
};

typedef struct Complex Complex;

void printComplexV1(Complex No1);

void printComplexV2(Complex *);

int main()
{
    Complex No1;
    Complex No2;

    printf("\nPlease enter a real number : ");
    scanf("%d", &No1.real);

    printf("\nPlease enter a imaginary number: ");
    scanf("%d", &No1.imag);

    printComplexV1(No1);

    No2 = No1;

    printComplexV2(&No2);

    return 0;
}

void printComplexV1(Complex No1)
{
    printf("\n\nThe First Complex No.\n => %d + %dj\n", No1.real, No1.imag);
}

void printComplexV2(Complex *p)
{
    printf("\n\nThe Second Complex No.\n => %d + %dj\n", (*p).real, (*p).imag);
    return;
}

