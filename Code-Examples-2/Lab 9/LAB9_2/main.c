/* Lab 9 Part 2
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 03/12/2014
Uses a macro 'CURRENT' to calculate the current in a circuit,
given the values for V, R1, R2, and R3. Prints out the value
for Current to 2 decimal places.
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define CURRENT(v, r1, r2, r3) (v)/(r1+r2+r3)

int main()
{
    double v, r1, r2, r3, I;

    printf("Enter Voltage: ");
    scanf("%lf", &v);

    printf("\n\nEnter R1, R2, and R3: \n");
    scanf("%lf %lf %lf", &r1, &r2, &r3);

    I = CURRENT(v, r1, r2, r3);

    if (I >= 0.01)
    {
    	printf("\n\nCurrent (I)\t=\t%.2f Amps\n\n", I);
    }
    else if (I > 0.00001)
    {
    	printf("\n\nCurrent (I)\t=\t%.2f mAmps\n\n", I*1000);
    }
    else
    {
    	printf("\n\nCurrent (I)\t=\t%.2f uAmps\n\n", I*1000000);
    }

    return 0;
}
