
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416                           //define PI as 3.1416

int main()                                  //main function
{
    char x;                                 //creates char variable x
    int l, checkScan, checkScan1;           //creates int variable l, checkScan1 and chechScan1
    double radius, area, pH, hL;            //creates double variables radius, area, pH and hL

    while(1)                                //while loop (continous loop)
    {
        printf("******* Shape Areas *******\n\n");                          //prints out the headline - Shape Areas
        printf("**Please choose the shape you want the area of: **\n\n");   //prints out the various shape options available for finding the area off
        printf("a) Circle\n");              //prints out option a) Circle
        printf("b) Square\n");              //prints out option b) Square
        printf("c) Triangle\n");            //prints out option c) Triangle
        printf("q) Quit\n");                //prints out option q) Quit


        printf("\nPlease enter a choice from above: ");                     //prompts the user to enter an option and scans it in as variable x
        scanf("%c", &x);
        fflush(stdin);                      //flushes the buffer

        if(x == 'a')                        //does the expression if x is equal to a
        {
            system("cls");                  //clears the screen
            printf("******** Circle Area ********\n");                      //prints out the headline - Circle Area

            printf("\n\n=> Please enter the radius: ");                     //prompts the user to enter a value for the radius
            checkScan = scanf("%lf", &radius);                              //copies the scanned in value for radius into checkScan

            while(checkScan == 0 || checkScan < 0)                          //does the expression if checkscan is equal to 0 or less than 0
            {
                printf("\n\nERROR: **** Invalid Radius!!! ****\nPlease enter in a valid Radius: ");     //prints out error and prompts the user to enter a valid radius
                fflush(stdin);              //flushes the buffer
                checkScan = scanf("%lf", &radius);                          //copies the new scanned in value for radius into checkScan
            }

            area = PI * radius * radius;    //formula for finding the area of a cirle
            printf("\nThe area of the circle is: %.4lf\n\n", area);         //prints the area of the circle on the screen
            fflush(stdin);                  //flushes the buffer

            system("pause");                //pauses the screen
            system("cls");                  //clears the screen

        }
        else if(x == 'b')                   //does the expression if x is equal to b
        {
            system("cls");                  //clears the screen
            printf("******** Square Area ********\n");                      //prints out the headline - Square Area

            printf("\n\n=> Please enter the length of the side: ");         //prompts the user to enter the length of the side
            checkScan = scanf("%d", &l);                                    //copies the scanned in value for l into checkScan

            while(checkScan == 0 || checkScan < 0)                          //does the expression if checkscan is equal to 0 or less than 0
            {
                printf("\n\nERROR: **** Invalid length!!! ****\nPlease enter in a valid length: ");     //prints out error and prompts the user to enter a valid length
                fflush(stdin);              //flushes the buffer
                checkScan = scanf("%d", &l);                                //copies the new scanned in value into checkScan
            }

            area = l*l;                     //formula for finding the area
            printf("\nThe area of the square is: %lf\n\n", area);           //prints the area of the square on the screen
            fflush(stdin);                  //flushes the buffer

            system("pause");                //pauses the screen
            system("cls");                  //clears the screen

        }
        else if(x == 'c')                   //does the expression if x is equal to c
        {
            system("cls");                  //clears the screen
            printf("******** Triangle Area ********\n");                    //prints out the headline - Triangle Area
            printf("\n\n=> Please enter the perpendicular height: ");       //prompts the user to enter the perpendicular height
            checkScan = scanf("%lf", &pH);                                  //copies the scanned in value for pH into checkScan

            while(checkScan == 0 || checkScan < 0)                          //does the expression if checkscan is equal to 0 or less than 0
            {
                printf("\n\nERROR: **** Invalid Height!!! ****\nPlease enter in a valid Height: ");     //prints out error and promts the user to enter a valid Height
                fflush(stdin);                                              //flushes the buffer
                checkScan = scanf("%lf", &pH);                              //copies the new scanned in value for pH into checkScan
            }

            printf("\n\n=> Please enter the hoizontal length: \n");         //prompts the user to enter the horizontal length
            checkScan1 = scanf("%lf", &hL);                                 //copies the scanned in value into checkScan1

            while(checkScan1 == 0 || checkScan1 < 0)                        //does the expression if checkscan1 is equal to 0 or less than 0
            {
                printf("\n\nERROR: **** Invalid Length!!! ****\nPlease enter in a valid Length: ");     //prints out error and prompts the user to enter a valid length
                fflush(stdin);              //flushes the buffer
                checkScan1 = scanf("%lf", &hL);                             //copies the new scanned in value into checkScan1
            }

            area = pH * hL * 0.5;           //formula for finding the triangle area
            printf("\nThe area of the triangle is: %.4lf\n\n", area);       //prints the area of the triangle on the screen
            fflush(stdin);                  //flushes the buffer

            system("pause");                //pauses the screen
            system("cls");                  //clears the screen

        }
        else if(x == 'q')                   //does the expression if x is equal to q
        {
            printf("\n\n=> Thank you and Goodbye\n\n");                     //prints out thank you and goodbye
            exit (0);                       //exits the program
            system("pause");                //pauses the screen
            system("cls");                  //clears the screen

        }
        else                                //does the expression if x matches none of the if and else if statemants
        {
            printf("\n\nYou have entered an invalid choice, Pls try again!!!\n");       //prints out invalid choice and prompts user to try again
            fflush(stdin);                  //flushes the buffer
            system("pause");                //pauses the screen
            system("cls");                  //clears the screen
        }
    }
    fflush(stdin);                          //flushes the buffer
    return 0;                               //ends program and return 0
}
