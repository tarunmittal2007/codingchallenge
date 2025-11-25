//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include<stdio.h>
#include<ctype.h>//isalpha(ch),tolower(ch) 

int main() 
{
FILE *fp;
char ch;
int vowels = 0, consonants = 0;// let both consonants and vowels be zero initially 
fp=fopen("text.txt","r");//Open the file in the read mode 

if(fp == NULL)// if the file doesnt exists or dont gets open 
{
printf("Error: Could not open file!\n");
return 0;
}

while((ch = fgetc(fp)) != EOF)// get the characters one by one until the end of the file 
{
if(isalpha(ch)) // Check if it is a letter if not , it will move to the next alphabet 
{               
ch = tolower(ch); // Convert to lowercase to reduce the number of cases from 10 to 5
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
vowels++;
else
consonants++;
}
}

fclose(fp);// function to close the file 

printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);

return 0;
}
