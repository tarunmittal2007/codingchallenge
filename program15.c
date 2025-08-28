//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character
*/

#include<stdio.h>
#include<math.h>

int main()
{
    printf("enter a character\n");
    char ch ;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("Lower case alphabet");
    }
    else if(ch>='A'&&ch<='B') 
    {
        printf("Upper case alphabet");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Digit");
    }
    else 
    {
        printf("Special character");
    }
    return 0;
}
