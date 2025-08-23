//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
#include<math.h>
int main()
{
    printf(" enter two numbers \n ");
    float num1, num2 ; 
    scanf("%f%f" ,&num1,&num2);
    float sum = num1 + num2 ;
    float diff = num1 - num2 ;
    float pro = num1*num2; 
    float quotient = num1/num2 ;
    printf("****the values of sum , difference , product and quotient for the entered values are ****\n"); 
    printf("SUM =%f \n DIFFERENCE =%f \n PRODUCT =%f \n QUOTIENT =%f \n ",sum,diff,pro,quotient );
    return 0 ; 
}