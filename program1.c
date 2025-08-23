//Write a program to input two numbers and display their sum.

#include<stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers a and b \n ");
    scanf("%d\n",&a);
    scanf("%d",&b);
    int sum = a+b;
    printf("The value of the sum for and is %d" ,sum );
    return 0 ;
}