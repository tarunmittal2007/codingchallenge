//Q16: Write a program to input three numbers and find the largest among them using if–else.
/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/

#include<Stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    printf("enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("largest no is %d",a);
    }
    else if(b>c)
    {
        printf("largest no is %d",b);
    }
    else 
    {
        printf("largest no is %d",c);
    }

    return 0;
}