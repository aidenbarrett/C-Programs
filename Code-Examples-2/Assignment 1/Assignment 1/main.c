
#include<stdio.h>
struct Date //structure definition
{
int day;
int month;
int year;
};// note semicolon ;

struct Library_member
{
char name[80];
char address[200];
int member_number;
double fines[10];
struct Date dob;
struct Date enrolled;
};//structure definition
//main continued on next slide:

main()
{
int i;
struct Library_member m = {
"Arthur Dent",
"16 New Bypass",
42,
{ 0.10, 2.58, 0.13, 1.10 },
{ 18, 9, 1959 },
{ 1, 4, 1978 }
};
printf("%s\n%s\n%d\n",m.name,m.address,m.member_number);
printf("Fines: ");
for(i=0;i<10;i++){
printf("%.2f ",m.fines[i]);
}
printf("\nDOB %d/%d/%d", m.dob.day,m.dob.month,m.dob.year);
printf("\nEnrolled %d/%d/%d\n\n",m.enrolled.day,m.enrolled.month,m.enrolled.year);
}
