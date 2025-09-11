// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

// perfect number is a number in which the sum of its proper divisors is the number itself 

#include<stdio.h> 

int main()
{
    int num , sum = 0 ; 

    printf("Enter a number : "); 
    scanf("%d",&num); 

    // if the entered number is negative , it is not a perfect number 
    if(num<0) 
    {
        printf("Not a perfect number");
        return 0 ; 
    }

    // find the proper divisors of the number and calculate their sum 
    for(int i = 1 ; i<num ; i++) 
    {
        if(num%i == 0) 
        sum = sum + i ; 
    }
  
    // check whether the number is equal to the sum calculated or not 
    if(sum == num)
    printf("Perfect number"); 
    else
    printf("Not a perfect number"); 

    return 0 ;  
}
