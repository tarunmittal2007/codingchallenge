//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include<stdio.h>
#include<math.h> 
int main()
{
    printf("ENTER THE VALUE OF LENGTH AND BREADTH\n");
        int len , bre ; 
        scanf("%d%d",&len,&bre);
    int area = len*bre ; 
    int perimeter = 2*(len+bre);
    printf("AREA OF THE RECTANGLE IS : %d",area );
    printf("\nPERIMETER OF THE RECTANGLE IS :%d" , perimeter );
    return 0;
}