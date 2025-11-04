/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal 
to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the 
array, then the left sum is 0 because there are no elements to the left. This also applies to the right 
edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>

// Function to find pivot index of the array 
int findPivotIndex(int nums[],int n) 
{
    int totalSum = 0 , leftSum = 0 ;

    for (int i = 0; i < n; i++) 
    totalSum = totalSum + nums[i];

    //for every index from 0 to n-1 , comapare left and right sum about that index 
    for (int i = 0; i < n; i++) 
    {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) 
        return i;

        leftSum = leftSum + nums[i];
    }

    return -1; //return -1 if no pivate point is found 
}

int main() 
{
    int n;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int nums[n];

    printf("Enter %d integers : ",n);
    for (int i = 0 ; i < n ; i++)
    scanf("%d",&nums[i]);

    int pivot = findPivotIndex(nums,n);

    if (pivot != -1)
    printf("Pivot index: %d\n",pivot);
    else
    printf("-1(Pivot index not found)\n");

    return 0;
}
