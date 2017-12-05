#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
    char name[20];
    double credits;
    double result;
    char grade[2];
    double GP_value;
    double GP_score;
}module;

typedef struct
{
    int num_modules;
    char firstname[20];
    char surname[20];
    char student_id[20];
    double total_credits;
    double total_GP_score;
    double GPA;
    char qualification[30];
    module course[15];
}student;

/* File parsing and search functions */
int get_file_num_students(FILE *);
void search(student *, char *, int);

/* Student Record input functions */
void student_read_file(FILE *, student *, int, int);
void student_read_user(student *);

/* Functions for determining student information */
void get_qualification(student *);
void compute_GP(module *);

/* Print functions */
void print_file_to_screen();
void print_records(student *, FILE *, int);
void print_summary(student *students, int num_students);


