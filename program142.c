/*
Q142: Store details of 5 students in an array of structures and print all.
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/

#include<stdio.h>

struct Student {
char name[50];
int roll;
int marks;
};

int main() 
{
struct Student s[5];
int i;

// Input details of 5 students
for(i = 0; i < 5; i++) {
printf("");
printf("Enter details of Student %d:\n", i + 1);

scanf(" Name: %s", s[i].name);
scanf(" Roll: %d", &s[i].roll);
scanf(" Marks: %d", &s[i].marks);
}

// Print all students in tabular form
printf("\nName\tRoll\tMarks\n");
for(i = 0; i < 5; i++) {
printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
}

return 0;
}
