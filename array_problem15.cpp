/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/

#include<iostream>

using namespace std;

void runing_sum(int arr[], int run_sum[], int size)
{
    int sum = 0,i = 0;
    while (i < size)
    {
        sum = sum + arr[i];
        run_sum[i] = sum;
        i++;
    }
    
}

int main()
{
    int arr[] = {1 , 35, 45, 35 ,37};
    int run_sum[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    runing_sum(arr,run_sum,size);
    cout<<"run_sum \t"; 
    for (int i = 0; i < size; i++)
    {
        cout<<run_sum[i]<<" ";
    }
    printf("\n");
    cout<<"array \t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    printf("\n");

}


