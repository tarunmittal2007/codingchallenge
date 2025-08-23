//Write a program to convert temperature from Celsius to Fahrenheit
#include<stdio.h> 
#include<math.h> 
int main()
{
//input the temperature in celcius
printf("ENTER THE VALUE OF TEMPERATURE IN CELSIUS \n ");
float celcius;
scanf("%f",&celcius);
float fahrenheit = (celcius*1.8)+32 ;
printf("temperature in fahrenheit is :%f" , fahrenheit );//output statement
return 0 ;
}