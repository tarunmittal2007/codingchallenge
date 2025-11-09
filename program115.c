/*Q115: Write a program to take two strings s and t as inputs (assume all characters 
are lowercase). The task is to determine if s and t are valid anagrams, meaning they 
contain the same characters with the same frequencies. Print "Anagram" if they are, 
otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0}; // For lowercase letters 'a' to 'z'
    int i;

    printf("Enter first string (s): ");
    scanf("%s", s);
    printf("Enter second string (t): ");
    scanf("%s", t);

    // If lengths differ, they cannot be anagrams
    if (strlen(s) != strlen(t)) 
    {
        printf("Not Anagram\n");
        return 0;
    }

    // Increment for s, decrement for t
    // here count[i] represents the characters from a to z as 0 to 25 
    for (i = 0; s[i] != '\0'; i++) 
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if values in the count array are zero or not . 
    for (i = 0; i < 26; i++) 
    {
        if (count[i] != 0) 
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
