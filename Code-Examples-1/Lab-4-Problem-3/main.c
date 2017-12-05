//
//  main.c
//  Lab 4 Problem 3
//  Aiden Barrett
//  B00075033
//  A program to calculate stamp duty on a property.

#include <stdio.h>
#include <stdlib.h>

int main()

{

    float value;

    printf("Please enter a value for the property: "); //Prompt for value of the property.

    scanf("%f", &value);

    if(value<=100000){
                                                                                                     // Calculate Stamp duty by multiplying value by rate and divide by 100.
    printf("The Stamp Duty rate for this property is 2%% and amounts to: %.2f\n", (value*2)/100.00); //Prints out percentage rate of 2% stamp duty on property.

    }

    if(value>100000 && value<=149999){

    printf("The Stamp Duty rate for this property is 5%% and amounts to: %.2f\n", (value*5)/100.00); //Prints out percentage rate of 5% stamp duty on property.


    }

    if(value>=150000 && value<=199999){

    printf("The Stamp Duty rate for this property is 7.5%% and amounts to: %.2f\n", (value*7.5)/100.00); //Prints out percentage rate of 7.5% stamp duty on property.


    }

    if(value>=200000 && value<=249999){

    printf("The Stamp Duty rate for this property is 10%% and amounts to: %.2f\n", (value*10)/100.00); //Prints out percentage rate of 10% stamp duty on property.


    }

    if(value>=250000){

    printf("The Stamp Duty rate for this property is 12.5%% and amounts to: %.2f\n", (value*12.5)/100.00); //Prints out percentage rate of 12.5% stamp duty on property.


    }

    return 0;

}

