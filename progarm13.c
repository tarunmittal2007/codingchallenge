//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year
*/

#include<stdio.h> 
#include<math.h> 

int main()
{
    printf("Enter year number \n");
    int year ;
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0))
        {
            printf("its a leap year");
        }
    else if((year%100==0)&&(year%400==0))
        {
            printf("its a leap year");
        }
    else if((year%100==0)&&(year%400!=0))
        {
            printf("its not a leap year");
        }
    else 
        {
            printf("its not a leap year");
        }
    return 0;
}
