//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/


#include <stdio.h>

int main() 
{
    char date[15];
    int day, month, year;
    char monthName[10];

    // Input date in dd/mm/yyyy format
    printf("Enter date (dd/mm/yyyy): \n");
    scanf("%s",date);

    // Extract day, month, and year using sscanf
    sscanf(date,"%d/%d/%d",&day,&month,&year);

    // Determine month name using switch
    switch (month) 
    {
        case 1:  sprintf(monthName, "Jan"); break;
        case 2:  sprintf(monthName, "Feb"); break;
        case 3:  sprintf(monthName, "Mar"); break;
        case 4:  sprintf(monthName, "Apr"); break;
        case 5:  sprintf(monthName, "May"); break;
        case 6:  sprintf(monthName, "Jun"); break;
        case 7:  sprintf(monthName, "Jul"); break;
        case 8:  sprintf(monthName, "Aug"); break;
        case 9:  sprintf(monthName, "Sep"); break;
        case 10: sprintf(monthName, "Oct"); break;
        case 11: sprintf(monthName, "Nov"); break;
        case 12: sprintf(monthName, "Dec"); break;
        default:
        printf("Invalid month entered!\n");
        return 1;
    }

    // Print the date in desired format
    printf("%2d-%s-%4d\n",day,monthName,year);

    return 0;
}
