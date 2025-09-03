// Q28: Write a program to print the product of even numbers from 1 to n.
/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include<stdio.h>

int main()
{
    int n ;
    printf("Enter the value of n\n") ;
    scanf("%d",&n);

    int pro=1 ;
    int i ; 

    for(i=1 ; i<=n ; i++)
    {
        if(i%2 == 0)
        {
            pro = (pro*i) ;
        }
    }
    printf("product of fist %d even numbers is %d",n,pro);

    return 0;
}
