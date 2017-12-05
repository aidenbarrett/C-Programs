#include <stdio.h>
#include <stdlib.h>


void printMenu(void);
int productAvailabele(int productNo);
int getMoney(int productNo);
int getInt(void);

int productNo, stockCount;

int main()
{
    int change;
    {
        printMenu();
        getInt();
        productAvailabele(productNo);
        change = getMoney(productNo);

        printf("\nYour Change please => %i Cents", change);
        printf("\nPlease take your Product\n");
        system("pause");
        system("cls");
    }
    return 0;
}

void printMenu(void)
{
    printf("1=>\tMars     70 cent\n");
    printf("2=>\tCoke    100 cent\n");
    printf("3=>\tApple    30 cent\n");
    printf("\nPlease choose a product: ");
}

int getInt(void)
{
    int no;

    do
    {
        no = scanf("%i", &productNo);
        fflush(stdin);

        if(no == 0)
        {
            printf("\n**** Invalid !!! ****\n");
            fflush(stdin);
        }
    }
    while(no != 1);
    {
        printf("Please enter an integer:");
        no = scanf("%i", &productNo);
        fflush(stdin);
    }
    return productNo;
}

