

#include<iostream>
 
using namespace std;
int search(int arr[],int l,int r,int key)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            return search(arr,l,mid - 1,key);
        return search(arr,mid + 1,r,key);
            
    }
    return 0;
    
}

int check(int arr[],int size)
{
    
    int left_pointer,right_pointer;
    int i = 0, j = size - 1, sum = 0 , count = 0;
    while (i < size && j >= 0)
    {
        left_pointer = arr[i]; right_pointer = arr[j];
        sum = left_pointer + right_pointer;
        if (sum == search(arr,0,size - 1,sum))
        {
            count++;
        }
        
    }
    cout<<count;
}

int main()
{
    printf("hi");
   int arr[] = {1,5,2,3,7,6};
   int size = sizeof(arr)/sizeof(arr[0]);
    
   
    
    return 0;
}