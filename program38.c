// Q38: Write a program to find the sum of digits of a number.
/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include<stdio.h> 

int main()
{
    int num,number,rem,sum=0 ;
    printf("Enter the number :\n");
    scanf("%d",&num);

    number = num ; //it will store the number to an another variable named number

    while(num>0)
    {
        rem = num%10 ; // it will give the last digit of number at that time 
        sum = sum+rem ;// it will calculate and store the sum of the digits 
        num = num/10 ; // it will update the number by removing the last digit fron number 
    }

    printf("sum of digits of %d is %d .", number,sum);/* since the value in num variable become zero 
    after loop execution , so here we have used the number variable where we have stored that same value */
    return 0 ; 
}
