//Write a program to swap two numbers using a third variable.

#include<stdio.h> 
#include<math.h> 
int main()
{
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d,b = %d\n", a,b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a,b);

    return 0;
}