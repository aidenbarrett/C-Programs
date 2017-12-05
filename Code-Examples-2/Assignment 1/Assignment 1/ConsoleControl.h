#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GREY 8
#define L_BLUE 9
#define L_GREEN 10
#define L_AQUA 11
#define L_RED 12
#define L_PURPLE 13
#define L_YELLOW 14
#define B_WHITE 15
#define BLACK 16


/*<<<<<<<<<<<<<<<<<<<<<<<<<< set_cursor_position >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function sets the console cursor's position to the coordinates
    that are passed into it.
--------------------------------------------------------------*/
void set_cursor_position(int x, int y)
{
    COORD target;
    target.X = x;
    target.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), target);
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< set_cursor_position >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< set_colour >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function takes in an int in the form of a predefined colour (declarations
    for the colours are at the top of this file). It then sets the console text
    colour to the colour that was passed into the function.
--------------------------------------------------------------*/
void set_colour(int colour)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colour);
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< set_colour >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< banner >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function clears the console and prints out a banner at the top. The
    message included in the banner and the colour of the banner are passed
    into the function when it is called. It then resets the text colour to
    white before returning to where it was called from.
--------------------------------------------------------------*/
void banner(char *message, int colour)
{
    int i;

    set_colour(colour);

    system("cls");
    printf("\n");

    for (i=0; i<80; i++)
    {
    	printf("%c", 95);
    }
    printf("\n");

    set_colour(GREY);
    printf("\t\tSTUDENT RECORDS MANAGER\n");
    set_colour(colour);

    printf("\t\t\t%s\n", message);

    for (i=0; i<80; i++)
    {
    	printf("%c", 95);
    }
    printf("\n\n");

    set_colour(B_WHITE);
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< banner >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

