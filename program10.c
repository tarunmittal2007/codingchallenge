//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include<stdio.h>
int main()
{
    int sec ;
    printf("enter the time in seconds\n");
    scanf("%d" , &sec);
    int seconds = sec%60;
    int minutes = (sec/60)%60;
    int hours = (sec/60)/60;
    printf("time in the format of hours:minutes:seconds\n");
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}