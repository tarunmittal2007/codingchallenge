// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num ;
    printf("enter the number from 1 to 7\n");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
    printf("MONDAY \n");
    break;
    case 2:
    printf("TUESDAY \n");
    break;
    case 3:
    printf("WEDNESDAY \n");
    break;
    case 4:
    printf("THRUSDAY \n");
    break;
    case 5:
    printf("FRIDAY \n");
    break;
    case 6:
    printf("SATURDAY \n");
    break;
    case 7:
    printf("SUNDAY \n");
    break;
    default:
    printf("inavlid input \n");
    break;
    }
    
    return 0;
}
