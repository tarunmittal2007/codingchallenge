/*
Q118: Write a program to take an input array of size n. The array should contain all the 
integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int main()
{
    int n, i, j, found;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    int max = arr[0];
    int min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        max = arr[i];
        if (arr[i] < min)
        min = arr[i];
    }

    // Find the missing number
    for (i = min; i <= max; i++)
    {
        found = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
            found = 1;
            break;
            }
        }
        if (found == 0)
        {
        printf("Missing number: %d",i);
        return 0;
        }
    }

    // If missing number is beyond max (like [1,2,3] → missing 0)
    if (min != 0)
    printf("Missing number: 0");

    return 0;
}
