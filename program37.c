// Q37: Write a program to find the LCM of two numbers.
/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include<stdio.h>

int main()
{
    int num1 , num2 , rem , LCM , HCF ; 

    printf("Enter two numbers :\n");
    scanf("%d%d",&num1,&num2);

    if(num1<0) // In case if the numbers are negative 
    num1 = -num1 ; 
    if(num2<0)
    num2 - -num2 ; 

    int number1 = num1 ; // values are stored to another variables 
    int number2 = num2 ; 

    while(num2!=0)
    {
        rem = num1%num2 ; //If remainder is 0, that means num2 divides num1 completely, so num2 is the HCF
        num1 = num2 ; // This is because HCF of (num1,num2) is the same as HCF of (num2,remainder)
        num2 = rem ; // This keeps reducing the numbers step by step until remainder becomes 0
    }

    HCF = num1 ; 

    LCM = (number1*number2)/HCF ; // it will calculate the lcm using lcm=(a*b)/hcf of a and b 

    printf("LCM is %d",LCM);

    return 0 ; 
}
