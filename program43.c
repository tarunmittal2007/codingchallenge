// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>

int main()
{
    int num , digit ; 
    int fact = 1 , sum = 0 ; 

    printf("Enter a number : "); 
    scanf("%d",&num); 

    // store the value to a temporary variable so that original value doesn't changes 
    int temp = num ; 

    // negative number are not strong numbers 
    if(num<0)
    {
        printf("Not a strong number"); 
        return 0 ;// if this codition executes , program ends here 
    }

    // calculate the sum of factorials of the digits of the number 
    while(temp!=0)
    {
     digit = temp%10 ; 
     for(int i =1 ; i<=digit ; i++)
     {
     fact = fact*i ;
     } 
     sum = sum + fact ; 

     fact = 1; // again initialise fact with 1 
     
     temp = temp/10 ;
    }

    // check whether the number fulfill the condition of strong number 
    if(sum == num)
    printf("Strong number"); 
    else 
    printf("Not a strong number");

    return 0 ; 
}
