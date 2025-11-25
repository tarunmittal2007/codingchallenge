/*
30: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include<stdio.h>

struct Student {
char name[50];
int roll;
int marks;
};

int main() 
{
struct Student s[100];
int n;
FILE *fp;

printf("Enter number of students: ");
scanf("%d", &n); 

fp = fopen("students.txt", "w");

if(fp==NULL) 
{
printf("Error opening file!\n");
return 0 ; 
}

for(int i = 0; i < n; i++)
{
printf("\nEnter details of student %d\n",i+1);
printf("Name: ");
scanf("%s",s[i].name);
printf("Roll Number: ");
scanf("%d",&s[i].roll);
printf("Marks: ");
scanf("%d",&s[i].marks);
// Write the content to the file using fprintf()
fprintf(fp,"%s %d %d\n",s[i].name,s[i].roll,s[i].marks);
}

fclose(fp);// close the file after having the input from the user 

//now read the content fron the file after having input 
fp = fopen("students.txt","r");

if(fp == NULL) 
{
printf("Error opening file!\n");
return 0 ; 
}

printf("\n--- Student Records from File ---\n");

struct Student temp;

// Read the content until the file ends 
while(fscanf(fp,"%s %d %d",temp.name,&temp.roll,&temp.marks) == 3) // Continue reading as long as fscanf reads exactly 3 values successfully 
{
printf("Name: %s | Roll: %d | Marks: %d\n",temp.name,temp.roll,temp.marks);
}

fclose(fp);
return 0;
}
