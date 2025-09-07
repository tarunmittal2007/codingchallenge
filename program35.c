// Q35: Write a program to print all factors of a given number.
/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10
*/

#include<stdio.h> 

int main()
{
    int num , i ; 
    printf("Enter the number : \n");
    scanf("%d",&num);

    printf("factors of %d are :\n",num);

    for(i=1 ; i<=num ; i++)
    {
        if(num%i == 0)//it will check whether the number is completely divisible by n or not 
        printf("%d ",i);// it will print all the values of i at which the number is divisible 
    }
    return 0 ;
}
