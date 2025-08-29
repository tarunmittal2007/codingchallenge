//Q17: Write a program to find the roots of a quadratic equation and categorize them.
/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

#include<stdio.h>
#include<math.h> 

int main()
{
    printf("enter the coffecient of the quadratic equation i.e. a,b,c \n ");
    float a,b,c ;
    scanf("%f%f%f",&a,&b,&c);

    float  dis; // to store the value of discriminant 
    dis = (b*b)-(4*a*c);

    float root1 , root2;

    if(dis > 0)
    {
        root1 = (-b+(sqrt(dis)))/(2*a);
        root2 = (-b-(sqrt(dis)))/(2*a);
        printf("roots are real and distinct %f%f" ,root1,root2);
    }
    else if(dis==0)
    {
        root1 = (-b)/(2*a);
        root1 == root2 ;
        printf("roots are real and equal %f" ,root1);
    }
    else 
    {
    float realpart = -b/(2*a);
    float imaginary = sqrt(-dis)/(2*a);
    printf("roots are compplex numbers %f+%fi , %f+%fi ", realpart ,imaginary,realpart,imaginary ); 
    } 
    return 0 ;
}
