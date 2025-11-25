/*
Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/

#include<stdio.h> 
enum week { Sunday , Monday , Tuesday , Wednesday , Thursday , Friday , Saturday }; 
int main() 
{
enum week days;
for(days = Sunday ; days <= Saturday ; days++) 
{
switch (days) 
{
case Sunday:    printf("SUNDAY = %d\n", days); break;
case Monday:    printf("MONDAY = %d\n", days); break;
case Tuesday:   printf("TUESDAY = %d\n", days); break;
case Wednesday: printf("WEDNESDAY = %d\n", days); break;
case Thursday:  printf("THURSDAY = %d\n", days); break;
case Friday:    printf("FRIDAY = %d\n", days); break;
case Saturday:  printf("SATURDAY = %d\n", days); break;
}
}
return 0;
}
