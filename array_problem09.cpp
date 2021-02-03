/*
    9) Given an array of positive and negative numbers, arrange them such that all negative integers 
    appear before all the positive integers in the array without using any additional data structure
     like hash table, arrays, etc. The order of appearance should be maintained.

*/
using namespace std;

#include<iostream>
void rearrange(int arr[],int size)
{
    int j,key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        if (key > 0) 
            continue;
      
        if (key < 0)
        {
            j=i-1;
            while ( arr[j] >  0 && j >= 0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        
        
        
    }
    
    
    
    
}
int main()
{
    int arr[] = {-1,3,4,-4,5,8,34,-5,-76,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array"<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    
    rearrange(arr ,size);
    cout<<"After arrangement"<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    
}