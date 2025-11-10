/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays 
such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main()
{
    int n1, n2, i, j, temp;

    printf("Enter the length of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements : ", n1);
    for (i = 0; i < n1; i++)
    scanf("%d", &arr1[i]);

    printf("Enter the length of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements : ", n2);
    for (i = 0; i < n2; i++)
    scanf("%d", &arr2[i]);

    int merged[n1 + n2];

    // Merge both the entered array to an another third array 
    for (i = 0; i < n1; i++)
    merged[i] = arr1[i];
    for (i = 0; i < n2; i++)
    merged[n1 + i] = arr2[i];

    // Sort the merged array to the ascending order 
    for (i = 0; i < n1 + n2 - 1; i++)
    {
        for (j = i + 1; j < n1 + n2; j++)
        {
            if (merged[i] > merged[j])
            {
            temp = merged[i];
            merged[i] = merged[j];
            merged[j] = temp;
            }
        }
    }

    printf("merged and Sorted Array: ");
    for (i = 0;i<n1+n2;i++)
    {
    printf("%d ", merged[i]);
    }

    return 0;
}
