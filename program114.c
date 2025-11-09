/*
Q114: Write a program to take a string s as input. The task is to find the length of the
longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    int i, start = 0, maxLen = 0, lastIndex[256];
    
    printf("Enter a string: ");
    scanf("%s", s);
    
    int n = strlen(s);

    // Initialize all characters as not seen
    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    // Loop through each character
    for (i = 0; i < n; i++) 
    {
        // If character already appeared in current substring
        if (lastIndex[s[i]] >= start)
            start = lastIndex[s[i]] + 1;

        // Update last seen index of the character
        lastIndex[s[i]] = i;

        // Calculate current length and update max length
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of the longest substring without repeating characters = %d\n", maxLen);
    
    return 0;
}
