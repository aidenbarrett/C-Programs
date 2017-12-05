#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include "Student.h"
#include "ConsoleControl.h"

student *students;
int num_students;
FILE *in_file, *out_file;

void read_from_user(char);
void read_from_file(char *);


/*<<<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int main()
{
    int choice;
    num_students = 0;
    char in_file_name[25], out_file_name[25], search_term[15];
    students = malloc(sizeof(*students));

    while(num_students == 0)
    {
        /*--------------------------------------------------------------
            This is the menu that will be displayed until some students
            have been added to the records.
        --------------------------------------------------------------*/
        banner("BOOT MENU", L_YELLOW);
        printf("(1)\tInput from default file\n");
        printf("(2)\tInput from specified file\n");
        printf("(3)\tInput manually\n");
        printf("(4)\tView existing records file\n");
        printf("(5)\tExit\n");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                /*--------------------------------------------------------------
                	This reads input from the default input file, 'StudentRecordsIN.txt'.
                --------------------------------------------------------------*/
                banner("FILE INPUT", L_PURPLE);
                read_from_file("StudentRecordsIN.txt");
                break;
            case 2:
                /*--------------------------------------------------------------
                	Allows the user to specifiy a particular input file.
                --------------------------------------------------------------*/
                banner("FILE INPUT", L_PURPLE);
                printf("Please enter File Name: (including extension)\n");
                scanf("%s", in_file_name);
                printf("\n");
                read_from_file(in_file_name);
                break;
            case 3:
                /*--------------------------------------------------------------
                    Calls read_from_user() to allow manual input from the console.
                --------------------------------------------------------------*/
                banner("MANUAL INPUT", AQUA);
                read_from_user('y');
                break;
            case 4:
                /*--------------------------------------------------------------
                    Calls print_file_to_screen to output the contents of a file to the console.
                --------------------------------------------------------------*/
                print_file_to_screen();
                break;
            case 5:
                return 0;
            default:
                break;
        }
        system ( "PAUSE" );
    }

    while(1)
    {
        /*--------------------------------------------------------------
            This menu will be displayed once some students have been added to the records,
            and will continue to be displayed until the user exits the program.
        --------------------------------------------------------------*/
        banner("MAIN MENU", L_GREEN);
        printf("(1)\tDisplay Students Summary\n");
        printf("(2)\tDisplay all Records\n");
        printf("(3)\tAdd to Records\n");
        printf("(4)\tMake a copy of Student Records\n");
        printf("(5)\tSearch for a student\n");
        printf("(6)\tSave and Quit\n");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                /*--------------------------------------------------------------
                	Prints the banner, then calls print_summary to print
                    out the summary, and then resets the cursor to the top of the console.
                --------------------------------------------------------------*/
                banner("STUDENTS SUMMARY", L_BLUE);
                print_summary(students, num_students);
                set_cursor_position(0, 0);
                break;

            case 2:
                /*--------------------------------------------------------------
                	Prints the banner, then calls print_records to print out all of the
                    student records, and then resets the cursor to the top of the console.
                --------------------------------------------------------------*/
                banner("ALL STUDENT RECORDS", L_RED);
                print_records(students, stdout, num_students);
                set_cursor_position(0, 0);
                break;
            case 3:
                /*--------------------------------------------------------------
                	Allows the user to choose to input from a specified file, or manual input.
                    Then calls the relevant 'read' function to add students.
                --------------------------------------------------------------*/
                banner("ADD TO RECORDS", L_PURPLE);
                printf("(1) Add from file\n");
                printf("(2) Add manually\n");
                scanf("%d",&choice);
                printf("\n");
                switch (choice)
                {
                    case 1:
                        printf("Please enter File Name: (including extension)\n");
                        scanf("%s", in_file_name);
                        printf("\n");
                        read_from_file(in_file_name);
                        break;
                    case 2:
                        read_from_user('y');
                        break;
                    default:
                        break;
                }
                break;
            case 4:
                /*--------------------------------------------------------------
                	Allows the user to export a copy of the student records to a specified file.
                --------------------------------------------------------------*/
                banner("EXPORT RECORDS", L_BLUE);
                printf("Please enter desired File Name: (including extension)\n");
                scanf("%s", out_file_name);
                printf("\n");

                out_file = fopen(out_file_name,"w");
                print_records(students, out_file, num_students);
                fclose(out_file);
                break;
            case 5:
                /*--------------------------------------------------------------
                	Passes a search term to search() to display any students with the specified surname.
                --------------------------------------------------------------*/
                banner("SEARCH FOR STUDENT", PURPLE);
                printf("Please enter surname to search for:\n");
                scanf("%s", search_term);
                printf("\n");
                search(students, search_term, num_students);
                break;
            case 6:
                /*--------------------------------------------------------------
                	This is executed when the user choose to exit. It outputs all student records to
                    'StudentRecordsOUT.txt', and then frees 'students' and exits the program.
                --------------------------------------------------------------*/
                out_file = fopen("StudentRecordsOUT.txt","w");
                print_records(students, out_file, num_students);
                fclose(out_file);

                free(students);
                return 0;
            default:
                break;
        }
        system ( "PAUSE" );
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< read_from_user >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function will read in student data using student_read_user
    until the user tells the program that they're finished inputting
    data. It reallocates 'students' each time before inputting the next student.
--------------------------------------------------------------*/
void read_from_user(char temp)
{
    int num_added = 0;

    while (temp != 'n')
    {
    	students = realloc(students, (num_students+1)*sizeof(*students));

    	student_read_user(students+num_students);

    	num_students++;

    	printf("Would you like to add another student? (y/n)");
        scanf(" %c", &temp);  //Scans in 'temp' so the loop can check its condition

        while(temp != 'y' && temp != 'n')
        {
            printf("\aPlease answer 'y' or 'n'\n");
            scanf(" %c", &temp);
        }
        printf("\n\n");

        num_added++;
    }

    printf("Added %d students\n\a", num_added);

    return;
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< read_from_user >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< read_from_file >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function calls get_file_num_students to determine how many extra students the file will input.
    It then reallocates 'students' so that it has enough memory to store all of the student records, and
    passes students to student_read_file to scan in the data from the file.
--------------------------------------------------------------*/
void read_from_file(char in_file_name[25])
{
    int num_end;

    in_file = fopen(in_file_name, "r");
    num_end = num_students + get_file_num_students(in_file);
    fclose(in_file);

    if(num_end != num_students)
    {
        students = realloc(students, (num_end)*sizeof(*students));   //allocates enough memory from the heap to store all of the students

        in_file = fopen(in_file_name, "r");
        student_read_file(in_file, students, num_students, num_end);
        fclose(in_file);

        printf("Added %d students\n\a", num_end - num_students);

        num_students = num_end;
    }
    else
    {
        set_colour(L_RED);
        printf("There are no student records to add in that file.\n");
        printf("Please ensure that the file is formatted correctly.\n\n");
        set_colour(B_WHITE);
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< read_from_file >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

