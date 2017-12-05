#include "Student.h"

/*----------------------------------------------------------------------------------------------------------------------------
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< NOTE >>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>
Files to be used for input MUST be formatted in the following way, with a forward slash '/' as a student delimiter.
Note that the file must also have a '/' after the final student, and each student can have a maximum of 15 modules.

FirstName Surname StudentID
ModuleID ModuleCredits ModuleResult
ModuleID ModuleCredits ModuleResult
ModuleID ModuleCredits ModuleResult
/
FirstName Surname StudentID
ModuleID ModuleCredits ModuleResult
ModuleID ModuleCredits ModuleResult
ModuleID ModuleCredits ModuleResult
/

----------------------------------------------------------------------------------------------------------------------------*/



/*<<<<<<<<<<<<<<<<<<<<<<<<<< get_file_num_students >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function parses an input file to determine how many students the file
    contains. This value is then used to reallocate enough memory for that many
    students before the data is read in.
--------------------------------------------------------------*/
int get_file_num_students(FILE *in_file)
{
    int num = 0;
    char temp[50];

    while(!feof(in_file))
    {
        fscanf(in_file,"%s", temp);
        if(strcmp(temp, "/") == 0)
        {
            num++;
        }
    }

    fclose(in_file);

    return num;
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< get_file_num_students >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< search >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function takes in the pointer to students, and then goes through
    all of the students, comparing each student's surname with the string
    that was passed into the function. If the student's surname is the same
    as the search term, it will print out that student's information.
--------------------------------------------------------------*/
void search(student *students, char *name, int num_students)
{
    int i, count = 0;

    for (i = 0; i < num_students; i++)
    {

    	if(strcmp((students+i)->surname, name) == 0)
    	{
            print_records((students+i), stdout, 1);
            count++;
    	}
    }

    if (count == 0)
    {
    	printf("No student found with surname '%s'\n\n", name);
    }
    else
    {
        printf("Found %d students with surname '%s'\n\n", count, name);
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< search >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< student_read_file >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function reads in student records from the FILE that is passed into it. It
    is passed *students, giving it access to the 1st students element. Using this,
    it can then access every student by incrmenting the pointer.
    num_temp is the current number of students, and is where the function begins
    adding in students.
    num_end is the number of students after the function is finished, and so the function
    will start at students[num_temp] and run until students[num_end-1].
    This allows the function to add student records on to an already populated list of students.
--------------------------------------------------------------*/
void student_read_file(FILE *in_file, student *students, int num_temp, int num_end)
{
    int i = 0;
    char temp[20];

    if (!in_file)
    {
        printf("Error!");
        exit(-1);
    }

    while(num_temp < num_end)
    {
        i = 0;

        (students+num_temp)->total_credits = 0;
        (students+num_temp)->total_GP_score = 0;
        (students+num_temp)->num_modules = 0;

        fscanf(in_file, "%s%s%s", (students+num_temp)->firstname, (students+num_temp)->surname, (students+num_temp)->student_id);

        fscanf(in_file,"%s", temp);

        /*--------------------------------------------------------------
            This while loop wil run until it is met with a '/', which means
            that it has reached the end of the current student's data.
        --------------------------------------------------------------*/
        while(temp[0] != '/')
        {
            /*--------------------------------------------------------------
                Because it already scanned in 'temp', if it wasn't '/' then it is the
                name of the module, and so sets the module name to whatever temp is.
            --------------------------------------------------------------*/
            strcpy((students+num_temp)->course[i].name, temp);

            /*--------------------------------------------------------------
                Scans in the cradits and result for the module, then calls compute_GP for the current module, which
                will set GP_value, grade, and GP_score for this module. It then adds them to the student's
                total credits and total GP score.
            --------------------------------------------------------------*/
            fscanf(in_file, "%lf%lf", &(students+num_temp)->course[i].credits, &(students+num_temp)->course[i].result);
            compute_GP(&(students+num_temp)->course[i]);
            (students+num_temp)->total_credits+=(students+num_temp)->course[i].credits;
            (students+num_temp)->total_GP_score+=(students+num_temp)->course[i].GP_score;

            (students+num_temp)->num_modules = ++i;

            /*--------------------------------------------------------------
                Scans in 'temp' so the loop can check its condition before executing again.
            --------------------------------------------------------------*/
            fscanf(in_file,"%s",temp);
        }

        /*--------------------------------------------------------------
            Computes the student's GPA by dividing its total_GP_score by its total_credits, and then
            passes the current student to get_qualification, which will determine what string to set
            its 'qualification' string as.
        --------------------------------------------------------------*/
        (students+num_temp)->GPA = ((students+num_temp)->total_GP_score)/((students+num_temp)->total_credits);
        get_qualification((students+num_temp));

        num_temp++;
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< student_read_file >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< student_read_user >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function is very similar to student_read_file, except that it takes its input
    from user input. The main differences between the two functions are that this function
    prints out the name of the current input that is needed, and also uses user input
    to determine when to finish adding modules and students.
--------------------------------------------------------------*/
void student_read_user(student *stud_ref)
{
    int i=0;
    char temp = 'y';

    stud_ref->total_credits = 0;
    stud_ref->total_GP_score = 0;
    stud_ref->num_modules = 0;

    printf("First name: ");
    scanf("%s", stud_ref->firstname);
    printf("Surname: ");
    scanf("%s", stud_ref->surname);
    printf("Student ID: ");
    scanf("%s", stud_ref->student_id);

    while(temp != 'n')
    {
        printf("\nModule name: ");
        scanf(" %[^\n]s", stud_ref->course[i].name);//%[^\n]s makes it scan in everything up until a newline character is read. This allows for 2-word module names.
        printf("Credits: ");
        scanf("%lf", &stud_ref->course[i].credits);
        printf("Student's result: ");
        scanf("%lf", &stud_ref->course[i].result);

        compute_GP(&stud_ref->course[i]);
        stud_ref->total_credits+=stud_ref->course[i].credits;
        stud_ref->total_GP_score+=stud_ref->course[i].GP_score;

        stud_ref->num_modules = ++i;

        printf("\nWould you like to add another module for this student? (y/n)\n");
        scanf(" %c", &temp);

        while(temp != 'y' && temp != 'n')
        {
            printf("Please answer 'y' or 'n'\n\a");
            scanf(" %c", &temp);
        }
    }

    stud_ref->GPA = (stud_ref->total_GP_score)/(stud_ref->total_credits);
    get_qualification(stud_ref);
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< student_read_user >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< get_qualification >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function sets the qualification string based on the student's GPA.
--------------------------------------------------------------*/
void get_qualification(student *stud)
{
    if (stud->GPA > 3.25)
    {
    	strcpy(stud->qualification, "First Class Honours");
    }
    else if (stud->GPA > 3.00)
    {
    	strcpy(stud->qualification, "Second Class Honours, Grade 1");
    }
    else if (stud->GPA > 2.50)
    {
    	strcpy(stud->qualification, "Second Class Honours, Grade 2");
    }
    else if (stud->GPA > 2.00)
    {
    	strcpy(stud->qualification, "Pass");
    }
    else
    {
        strcpy(stud->qualification, "Did not pass");
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< get_qualification >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< compute_GP >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function sets the GP value & grade char based on the result of that module
--------------------------------------------------------------*/
void compute_GP(module *mod)
{
    if (mod->result > 80)
    {
    	mod->GP_value = 4.00;
    	strcpy(mod->grade, "A");
    }
    else if (mod->result > 70)
    {
    	mod->GP_value = 3.50;
    	strcpy(mod->grade, "B+");
    }
    else if (mod->result > 60)
    {
        mod->GP_value = 3.00;
        strcpy(mod->grade, "B");
    }
    else if (mod->result > 55)
    {
    	mod->GP_value = 2.75;
    	strcpy(mod->grade, "B-");
    }
    else if (mod->result > 50)
    {
        mod->GP_value = 2.50;
        strcpy(mod->grade, "C+");
    }
    else if (mod->result > 40)
    {
    	mod->GP_value = 2.00;
    	strcpy(mod->grade, "C");
    }
    else if (mod->result > 35)
    {
        mod->GP_value = 1.50;
        strcpy(mod->grade, "D");
    }
    else
    {
        mod->GP_value = 0;
        strcpy(mod->grade, "F");
    }

    mod->GP_score = (mod->credits)*(mod->GP_value);
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< compute_GP >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< print_file_to_screen >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function will display all of a file's contents on the console.
--------------------------------------------------------------*/
void print_file_to_screen()
{
    int c;
    char in_file_name[25];

    printf("Please enter File Name: (including extension)\n");
    scanf("%s", in_file_name);
    printf("\n");

    FILE *in_file = fopen(in_file_name,"r");

    if (!in_file)
    {
        printf("Error!");
        return;
    }

    while ((c = getc(in_file)) != EOF)
    {
        putchar(c);
    }

    fclose(in_file);
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< print_file_to_screen >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< print_records >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
    This function is used to print out all of the student records.
    It can print to a file by passing it into the function, and can
    also print to the console by passing 'stdout' instead of a file.
--------------------------------------------------------------*/
void print_records(student *students, FILE *out_file, int num_students)
{
    int i, j;

    for (i=0; i<num_students; i++)
    {
        fprintf(out_file, "Student Name: \t\t%s %s\n",(students+i)->firstname, (students+i)->surname);
        fprintf(out_file, "Student ID: \t\t%s\n",(students+i)->student_id);
        fprintf(out_file, "# of Modules: \t\t%d\n\n",(students+i)->num_modules);
        fprintf(out_file, "Student's GPA: \t\t%.2f\n",(students+i)->GPA);
        fprintf(out_file, "Qualification Level: \t%s\n\n",(students+i)->qualification);

        for (j=0; j<(students+i)->num_modules; j++)
        {
            fprintf(out_file, "\tModule name: \t\t%s\n",(students+i)->course[j].name);
            fprintf(out_file, "\tModule credits: \t%.0f\n",(students+i)->course[j].credits);
            fprintf(out_file, "\tModule result: \t\t%.0f%%\n",(students+i)->course[j].result);
            fprintf(out_file, "\tModule grade: \t\t%s\n\n",(students+i)->course[j].grade);
        }
        fprintf(out_file, "\n------------------------------------------------------------------------------\n\n");
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< print_records >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<< print_summary >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/*--------------------------------------------------------------
This function prints a summary of the records to the console.
--------------------------------------------------------------*/
void print_summary(student *students, int num_students)
{
    int i;

    printf("Number of students: \t%d\n\n", num_students);
    printf("%15s%15s%15s%15s", "FIRST NAME", "SURNAME", "GPA", "MODULES");
    printf("\n------------------------------------------------------------------------------\n\n");

    for (i=0; i<num_students; i++)
    {
    	printf("%15s%15s%15.2f%15d\n",(students+i)->firstname, (students+i)->surname, (students+i)->GPA, (students+i)->num_modules);
    }
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<< print_summary >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


