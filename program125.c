/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>
int main() 
{
    FILE *fp;
    char filename[100];
    char text[200];

    // Taking file name input from the user
    printf("Enter filename: ");
    scanf("%s",filename);

    // Opening file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) 
    {
    printf("Error opening file.\n");
    return 1;
    }

    // Clear input buffer
    getchar();

    // Taking text input from user
    printf("Enter text to append: ");
    gets(text);

    // Append the text to the file
    fputs(text,fp);

    printf("File updated successfully with appended text.\n");

    fclose(fp);
    return 0;
}
