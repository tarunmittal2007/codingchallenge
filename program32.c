// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h> 
int main()
{
    int number,num,remainder ; // variable declaration
    int reverse = 0 ; 
    printf("Enter a number\n");
    scanf("%d",&number); // input a number from user 

    num = number ; /* store the number entered by the user to an another variable 
                   as the value stored will get updated in the update statement of 
                   the loop , so we can check using another variable at last  */  

    while(num!=0)  // loop to calculate the reverse of the the entered number 
    {
        remainder = num%10 ;
        reverse = reverse*10 + remainder ; // storage of the reverse of the number 
        num = num/10 ; // update statement of the loop 
    }

    if(number==reverse)  // to check if the entered number is equal to the reverse calculated 
    {
       printf("NUMBER IS PALINDROME");
    }
    else // if both the values are different , else statement will execute 
    {
       printf("NOT A PALINDROME NUMBER");
    }
    
    return 0; 

}
