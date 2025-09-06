// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h> 
#include<math.h> // math file is included to perform power operation 

int main()
{
    int num , rem ; 
    float sum =0 ; // since pow operation gives float value 
    int digit = 0 ; 

    printf("enter the number\n");
    scanf("%d",&num);

    int temp = num ; /* the number is stored in a temporary variable for the loop execution */
    if(num<0)  // will execute in case of negative numbers 
    {
        printf("its not an armstrong number ");
        return 0 ; 
    }

    while(temp!=0)  //this loop will check the no of digits in the number entered by the user 
    {
    temp/= 10 ; 
    digit++ ; 
    }

    temp = num ; 

    while(temp!=0) /* it will check the value of sum of digits to the power n 
                where n is the number of digits in the number entered by the user*/
    {
        rem = temp%10 ; 
        sum = sum + pow(rem,digit) ;
        temp = temp/10 ; 
    }

    if((int)sum == num)
    {
        printf("its an armstrong number ");
    }
    else 
    {
        printf("its not an armstrong number ");
    }

    return 0 ;
}
