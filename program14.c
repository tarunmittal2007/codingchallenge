//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/

#include<stdio.h> 
#include<math.h> 

int main()
{
    printf("enter the character \n");
    char ch ;
    scanf("%c",&ch); // input 
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) //check whether its a alphabet or not
    {
        //check for a vowel or not 
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("the entered character is a vowel");
        }
        else
        {
            printf("the entered character is a consonant");
        }
    }
    else 
    {
        printf("entered character is not an alphabet");
    }
    return 0;
}
