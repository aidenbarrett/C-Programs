#include <stdio.h>
#include <stdlib.h>

/*********************************************************
 * This function should get a character from the keyboard
 * and check that it is a valid grade, i.e. A -> F, and
 * then return that grade.
 *
 * Lowercase grades should be changed to uppercase.
 *
 * The buffer should be flushed at the end.
 *
 * If the user enters an invalid character the function
 * should display this error message:
 *       ERROR - Invalid grade.  Please try again:
 * and should keep looping until it gets a valid grade.
 *
 * Thus this function should only ever return a valid grade.
 *
 *********************************************************/
char getGrade(void);                                         //function prototype




/**************************************************************
 * This function should return the Grade point value associated
 * with a particular grade e.g. 4.00 for an A etc etc.
 *
 * This function assumes that the grade passed to it will always
 * be valid.
 *
 ***************************************************************/
double getGradePointValue(char grade);                      //function prototype




int main(int argc, char *argv[])                            //main function
{
    int i;                                                  //creates int variable i
    char gradeEntered;                                      //creates char variable gradeEntered
    double gradeScore, gpa;                                 //creates double variables gradeScore and gpa

    for(i = 0; i < 6; i++)                                  //for loop used to get 6 valid grades
    {
        printf("Please enter grade %d: ", i + 1);           //promts the user to enter grade and counts it
        gradeEntered = getGrade();                          //copies the valid grade returned into gradeEntered

        gradeScore += getGradePointValue(gradeEntered);     //grade returned from the function is added to gradeScore

    }

    gpa = gradeScore / 6;                                   //formula for getting gpa (divides gradeScore by 6 and copies the answer into gpa)

    printf("Your GPA is: %.2lf\n\n", gpa);                  //prints out the Gpa grade


    system("PAUSE");                                        //pauses the system
    return 0;                                               //ends the program and returns 0
}


char getGrade(void)                                         //getGrade function (checks that a valid grade is entered)
{
    char gradeCheck;                                        //creates char variable gradeCheck

    while(1)                                                //while loop, continous loop until it gets 6 right values
    {
        scanf("%c", &gradeCheck);                           //scans in the value entered for gradeCheck
        fflush(stdin);                                      //flushes the buffer

                                                            //if, else if and else statement for getting the grade and storing it in gradeCheck
        if(gradeCheck == 'a' || gradeCheck == 'b' || gradeCheck == 'c' || gradeCheck == 'd' || gradeCheck == 'f')
        {
            gradeCheck = gradeCheck - 32;                   //formula for converting gradecheck into an upper case letter
            return gradeCheck;                              //returns gradeCheck back main
        }
        else if(gradeCheck == 'A' || gradeCheck == 'B' || gradeCheck == 'C' || gradeCheck == 'D' || gradeCheck == 'F')
        {
            return gradeCheck;                              //returns gradeCheck back main
        }
        else
        {
            printf("ERROR - ***Invalid grade***  Please try again : ");     //prints out Error and promts the user to try again
            fflush(stdin);                                                  //flushes the buffer
        }
    }
}


double getGradePointValue(char grade)       //getGradePointValue function (allocates gpa points to the grade)
{
    double gpaGrade;                        //creates double variable gpaGrade

                                            //if statement for finding gpaGrade
    if(grade == 'A')                        //if grade is equal to A, gpaGrade = 4.0
    {
        gpaGrade = 4.0;
    }
    if(grade == 'B')                        //if grade is equal to B, gpaGrade = 3.0
    {
        gpaGrade = 3.0;
    }
    if(grade == 'C')                        //if grade is equal to C, gpaGrade = 2.0
    {
        gpaGrade = 2.0;
    }
    if(grade == 'D')                        //if grade is equal to D, gpaGrade = 1.5
    {
        gpaGrade = 1.5;
    }
    if(grade == 'F')                        //if grade is equal to F, gpaGrade = 0.0
    {
        gpaGrade = 0.0;
    }

    return gpaGrade;                        //return gpaGrade back to main
}




