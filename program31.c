//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/ 

#include <stdio.h>

void toBinary(int n) 
{
    if (n > 1) 
    {
        toBinary(n / 2);   // recursive call to print higher bits first
    }
    printf("%d", n % 2);   // it will print the bit form last to first 
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("0");   // special case for 0 
    } 
    else 
    {
        toBinary(num);
    }

    return 0;
}
