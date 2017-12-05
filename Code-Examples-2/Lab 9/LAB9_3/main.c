/* Lab 9 Part 3
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 03/12/2014
'functions.h' defines 5 different macros to be used. The program
calulates values using those macros, and outputs the answers
to a file 'data.dat'. The file is then closed, and reopened in
read mode. The contents are then displayed from the file.
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

int main()
{
    double x;
    char c;

    FILE *data_file = fopen("data.dat", "w");

    x = A2B(2,4);
    fprintf(data_file, "A2B(2,4)\t=\t%.0f\n", x);

    x = INVERSE(6);
    fprintf(data_file, "INVERSE(6)\t=\t%.2f\n", x);

    x = MIN(25,43);
    fprintf(data_file, "MIN(25,43)\t=\t%.0f\n", x);

    x = MAX(25,43);
    fprintf(data_file, "MAX(25,43)\t=\t%.0f\n", x);

    x = CUBE(5);
    fprintf(data_file, "CUBE(5)\t\t=\t%.0f\n", x);

    fclose(data_file);

    printf("Values calculated\n\n");
    system("PAUSE");

    data_file = fopen("data.dat", "r");
    if (!data_file)
    {
        printf("Error! FILE NOT FOUND\n\n");
        return -1;
    }

    printf("CONTENTS OF DATA.DAT FILE:\n\n\n");

    while ((c = getc(data_file)) != EOF)
    {
        putchar(c);
    }

    fclose(data_file);

    return 0;
}
