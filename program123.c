/*
Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/

#include<stdio.h>
int main() 
{
    FILE *fp;
    char filename[100],ch,prev = ' ';
    int characters = 0,words = 0,lines = 0;

    printf("Enter file name: ");
    scanf("%s",filename);

    fp = fopen(filename,"r");
    if (fp == NULL) 
    {
    printf("Error opening file!\n");
    return 1;
    }

    while((ch = fgetc(fp)) != EOF) 
    {
        characters++; // to count the number of characters in the text 
        if(ch == '\n') // to count the number of lines in the text 
        lines++;
        // number of words can be checked by the help of number of sapces and \n i.e. new line 
        if((ch == ' ' || ch == '\n') && (prev != ' ' && prev != '\n'))
        words++;
        prev=ch; //purpose is to store the last character of the text 
    }

    //to check the Last word (if file does not end with space/newline)
    if (prev != ' ' && prev != '\n')
    words++;

    fclose(fp); // close the created text file 

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines + 1);

    return 0;
}
