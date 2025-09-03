// Q30: Write a program to reverse a given number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include<stdio.h> 

int main()
{
int num ;
printf("Enter the number : ");
scanf("%d",&num);
   
    int number = num ; 

    int i , remainder ; 
    int reverse=0 ; 

    while(num > 0)
    { 
    remainder = num%10 ; 
    reverse = reverse*10 + remainder ;
    num = num/10 ; 
    }

printf("Reverse of %d is %d ",number,reverse);
return 0;
}