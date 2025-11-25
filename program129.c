/*
29: A file numbers.txt contains a list of integers separated by spaces. Read all 
integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/

#include<stdio.h>
int main()
{
FILE *fp;
int num,sum=0,count=0 ; 
float avg;

fp = fopen("numbers.txt","r");// ope the file in the readable format so that reading the input from the file can be easy 

if(fp == NULL) 
{
printf("Error: Could not open file!\n");
return 0;
}

// Read the numbers from the file until the end of the file
while(fscanf(fp,"%d",&num) == 1)//fscanf returns: 1 if it successfully reads one integer
{
sum += num;      // Add number to the sum 
count++;         // count the number of numbers read from the file 
}

fclose(fp);// close the file 

if(count>0)
avg = (float)sum/count;   // Calculate average of the sum calculated 
else
avg = 0;

printf("Sum = %d\n",sum);
printf("Average = %.2f\n",avg);

return 0;
}
