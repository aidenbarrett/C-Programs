#include <stdio.h>
#include <stdlib.h>


//Structure template
struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date today;

    printf("\nPlease enter day => ");
    scanf("%d", &today.day);

    printf("\nPlease enter month => ");
    scanf("%d", &today.month);

    printf("\nPlease enter year => ");
    scanf("%d", &today.year);

    printf("\nThe Date entered is => %d/%d/%d\n", today.day, today.month, today.year);
    return 0;
}
