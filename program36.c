// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>

int main()
{
    int num1 , num2 , rem ; 
    printf("Enter two numbers \n");
    scanf("%d%d",&num1,&num2);

    while(num2 != 0)
    {
        rem = num1%num2 ; //If remainder is 0, that means num2 divides num1 completely, so num2 is the HCF
        num1 = num2 ; // This is because HCF of (num1,num2) is the same as HCF of (num2,remainder)
        num2 = rem ; // This keeps reducing the numbers step by step until remainder becomes 0
    }

    printf("HCF of the entered numbers is : %d ",num1);
}
