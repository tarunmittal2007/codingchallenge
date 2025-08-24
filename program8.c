// Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h> 

int main()
{ 
    printf("enter the value of n \n");// here n is the value of the no. upto which the sum has to be calculated 
    int n , sum ;  // variable declartion 
    scanf("%d" , &n);
    sum =(n*(n+1))/2;   // sum calculation
    printf("the sum of %d natural numbers is : %d " , n , sum ); // output statement 
    return 0 ;
}