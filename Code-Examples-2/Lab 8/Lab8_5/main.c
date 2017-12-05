/* Lab 8 Part 5
------------------------------------------------------------
Programmer: Aiden Barrett
Date: 26/11/2014

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 50

double get_mean(int *);
double get_std_dev(int *, double);
int control_check(int *, double, double);
void print_values(int *);

int main()
{
    srand(time(NULL));
    int i, x, limit_check;
    double mean, std_dev;
    int *numbers;
    char choice;

    numbers = malloc(N*sizeof(int));

    choice = 'a';

    while(choice != 'n')
    {
        for (i=0; i<N; i++)
        {
            x = (1+(rand()%100));
            *(numbers+i) = x;
        }

        mean = get_mean(numbers);
        std_dev = get_std_dev(numbers, mean);
        limit_check = control_check(numbers, mean-(std_dev)*3, mean+(std_dev)*3);

        printf("Mean = %.2f\n\n", mean);
        printf("StdDev = %.2f\n\n", std_dev);
        printf("No. of values which fell outside of control limits = %d\n\n", limit_check);

        printf("Would you like to print out all %d values? (y/n)\n", N);
        scanf(" %c", &choice);
        if (choice == 'y')
        {
        	print_values(numbers);
        }

        printf("Would you like to run the program again? (y/n)\n");
        scanf(" %c", &choice);
        while(choice != 'y' && choice != 'n')
        {
            printf("A simple 'y' or 'n', please...\n");
            scanf(" %c", &choice);
        }

        printf("\n\n");
    }

    printf("OK bye\n\n");

	return 0;
}

double get_mean(int *num)
{
    int i, sum;

    for(i=0;i<N;i++)
    {
        sum += *(num+i);
    }

    return (double)(sum/N);
}

double get_std_dev(int *num, double ave)
{
    int i;
    double sum;

    sum = 0;

    for (i=0; i<N; i++)
    {
    	sum += (double)pow(*(num+i)-ave, 2);
    }

    return (sqrt(sum/(N-1)));
}

int control_check(int *num, double LCL, double UCL)
{
    int i, count;

    count = 0;

    for (i=0; i<N; i++)
    {
    	if (*(num+i) > UCL || *(num+i) < LCL)
    	{
    		count++;
    	}
    }

    return count;
}

void print_values(int *num)
{
    int i;

    for (i=0; i<N; i++)
    {
    	printf("Element %d =\t%d\n", i+1, *(num+i));
    }

    printf("\n\n");
}
