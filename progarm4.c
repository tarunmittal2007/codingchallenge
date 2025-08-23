//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h> 
#include<math.h> 
int main()
{
    printf("ENTER THE VALUR OF THE RADIUS OF THE CIRCLE \n");
    float radius ;
    scanf("%f" ,&radius);
    float area = 3.14*radius*radius ;
    float circum = 2*3.14*radius ;
    printf("ARAE OF THE CIRCLE :%f" , area );
    printf("\nCIRCUMFERENCE OF THE CIRCLE :%f" , circum);
    return 0 ;
}