// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include<stdio.h> 
#include<math.h> 

int main()
{
    float p,r,t ;// variable declaration for principal ,rate ,time 
    printf("enter principal amount , rate of interest per annum and time in years for which interest has to be calculated :\n ");
    scanf("%f%f%f" ,&p,&r,&t);
    float SI = (p*r*t)/100;
    float CI = (p*(pow(1+(r/100),t)))-p;
    printf("SIMPLE INTEREST AND COMPUND INTEREST IS");
    printf("\nsimple interest : %f" , SI);
    printf("\ncompound interest :%f" , CI);
    return 0;
}

