/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the 
content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include<stdio.h>
int main() 
{
    FILE *src,*dest;
    char srcFile[100],destFile[100];
    int ch;

    // Taking file names input from the user
    printf("Enter source file name: ");
    scanf("%s",srcFile);

    printf("Enter destination file name: ");
    scanf("%s",destFile);

    // Opening source file in read mode
    src=fopen(srcFile,"r");
    if(src == NULL) 
    {
    printf("Error: Cannot open source file.\n");
    return 1;
    }

    // Opening destination file in write mode
    dest=fopen(destFile,"w");
    if(dest == NULL) 
    {
    printf("Error: Cannot open destination file.\n");
    fclose(src);
    return 1;
    }

    // Copying contents using fgetc() and fputc() functions 
    while ((ch=fgetc(src)) != EOF) 
    fputc(ch,dest);

    printf("File copied successfully to %s\n", destFile);

    // Close both files i.e. source file and the destination file 
    fclose(src);
    fclose(dest);

    return 0;
}
