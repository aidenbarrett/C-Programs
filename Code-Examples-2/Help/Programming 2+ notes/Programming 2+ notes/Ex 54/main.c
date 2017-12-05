#include <stdio.h>
#include <stdlib.h>

//Structure template
struct date
{
    int day;
    int month;
    int year;
};

typedef struct date Date;

void printDateNTimes(Date *, int n);

int main()
{
    Date today;
    int a = 0;

    printf("\nPlease enter day => ");
    scanf("%d", &today.day);

    printf("\nPlease enter month => ");
    scanf("%d", &today.month);

    printf("\nPlease enter year => ");
    scanf("%d", &today.year);

    printf("\nPlease enter the amount of times date should print => ");
    scanf("%d", &a);

    printDateNTimes(&today, a);

    return 0;
}

void printDateNTimes(Date *date_ptr, int n)
{
    int x = 0;
    while(x < n)
    {
        printf("\nThe Date entered is => %d/%d/%d\n", (*date_ptr).day, (*date_ptr).month, (*date_ptr).year);
        x += 1;
    }
}
