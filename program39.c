// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>

int main()
{
    int num,digit,pro=1; 
    printf("Enter a number \n");
    scanf("%d",&num);

    int number = num ; 

    if(num<0) // if the number is negative 
    num = -num ;

    while(num!=0)
    {
    digit = num%10 ; 
    if(digit%2 != 0)// will be executed if the digit is odd 
    {
        pro = pro*digit ; // calculation of product of odd digits 
    }
    num=num/10; // update statement of the number 
    }

    printf("the product of odd digits of %d is %d.",number,pro);

    return 0 ; 
    
}
