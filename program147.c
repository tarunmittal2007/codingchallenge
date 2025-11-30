//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

// Structure for Employee
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() 
{
    struct Employee emp, readEmp;
    FILE *fp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details successfully stored in file.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display data read from file
    printf("\nEmployee Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",readEmp.name, readEmp.id, readEmp.salary);

    return 0;
}
