// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() 
{
    int num,digit,rev=0;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    // First reverse the number (so digits come in correct order later)
    int temp = num;
    
    while(temp > 0) 
    {
        digit = temp % 10;                   
        rev = rev*10 + digit;
        temp /= 10;
        if(digit!=1 && digit!=0)
        {
            printf("invalid input , binary number can only have 0 and 1 "); 
            return 1 ;
        }
    }

    printf("1's Complement: ");
    // Now process reversed number and flip bits
    while(rev > 0) 
    {
        digit = rev%10;
        if (digit == 0)
            printf("1");
        if (digit == 1)
            printf("0");
        rev /= 10;
    }

    printf("\n");
    return 0;
}
