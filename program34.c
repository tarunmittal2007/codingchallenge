// Q34: Write a program to check if a number is prime.
/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num ; 
    printf("enter a number \n");
    scanf("%d",&num); 

    int i , n=0 ;// n is declared here to count the number of factors of the number 
    for(i=1;i<=num;i++)
    {
        if(num%i == 0) // to check whether a number is the factor the factor of i 
       {
        n = n+1 ; 
       }
    }

    if(n==2) // since in case of prime number , there will be only two factors 1 and the number itself 
    {
        printf("%d is a prime number",num);
    }
    else 
    {
        printf("%d is not a prime number",num);
    }

    return 0 ; 
    
}
