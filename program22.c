// Q22: Write a program to find profit or loss percentage given cost price and selling price.
/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float CP,SP;
    printf("enter the value of cost price \n");  // input cost price 
    scanf("%f",&CP);
    printf("enter the value of selling price \n");  // input selling price 
    scanf("%f",&SP);

    if( CP<SP )
    {
        float profit = SP-CP ; // calculation of profit 
        float profitper = (profit/CP)*100; // calcualtion of profit percentage 
        printf("profit percentage : %f",profitper);
    }
    else if( SP<CP )
    {
        float loss = CP-SP ; // calculation of loss 
        float lossper = (loss/CP)*100; // calculation of loss percentage 
        printf("loss percentage : %f",lossper);
    }
    else 
    {
        printf(" No profit , No loss "); // if there is no loss or profit 
    }
    return 0; 
}
