/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or 
equal to x and print it. This element is called the ceil of x. If such an element 
does not exist, print -1. Note: In case of multiple occurrences of ceil of x, 
return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2
*/

#include<stdio.h>

int findCeilIndex(int arr[], int n, int x) 
{
    //here i have used binary search technique to search for the number which is greaater than or equal to the inputed number 
    int low = 0 , high = n-1;
    int result = -1;

    while(low<=high) 
    {
        int mid = (low+high)/2;

        if(arr[mid]>=x)
        {
            result = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;// here result is the index of the number >= inputed number i.e. the ceil value of the inputed number 
}

int main() 
{
    int n,x;

    printf("Enter number of elements in the sorted array(ascending order): ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements in sorted order: ",n);
    for (int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    printf("Enter the value of x: ");
    scanf("%d",&x);

    int index = findCeilIndex(arr, n, x);

    if(index != -1)
    printf("\nCeil of %d is at index: %d (Value = %d)\n", x, index, arr[index]);
    else
    printf("\nCeil does not exist for %d (Output: -1)\n", x);

    return 0;
}
