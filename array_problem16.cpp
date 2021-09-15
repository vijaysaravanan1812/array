/*
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:

Input: arr = [2,1]
Output: false
Example 2:

Input: arr = [3,5,5]
Output: false
Example 3:

Input: arr = [0,3,2,1]
Output: true
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 104

*/

#include<iostream>
 
using namespace std;

template <typename T = int>
void check_mountain(T arr[],int size)
{
    if (size < 3)
    {
        
        printf("It is not mountain array \n");
    }
    else if(size >= 3)
    {
        int i = 0;
        while (arr[i+1] > arr[i])
            i++;
        while (arr[i + 1 ] < arr[i])
            i++;
        if (i == size)
        {
            printf("It is mountain array\n");
        }
        else
        {
            
            printf("It is not mountain array\n");
        }
    }   
    
    
    
}


int main()
{
    int arr[] = {2,4,7,9,6,4,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    check_mountain(arr, size);
    int arr1[] = {2,4,7,9,6,4,5,1};
    size = sizeof(arr1)/sizeof(arr1[0]);
    check_mountain(arr1, size);
    int arr2[] = {2,4,9,9,6,4,2,1};
    size = sizeof(arr2)/sizeof(arr2[0]);
    check_mountain(arr2, size);
    int arr3[] = {2,3};
    size = sizeof(arr3)/sizeof(arr3[0]);
    check_mountain(arr3, size);

}