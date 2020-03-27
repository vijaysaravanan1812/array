//Rearrange the array elements so that positive and negative numbers are placed alternatively. 
//Number of positive and negative numbers need not be equal. If there are more positive numbers 
//they appear at the end of the array. If there are more negative numbers, they too appear in 
//the end of the array.

using namespace std;
void rearrange(int arr[],int size)
{
    int count,temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    
    for ( int j = 0; j < size; j=j+2)
    {
        int i =0;
        if (arr[j] <= 0)
        {
            count = 0;
        }  
        if (count == 0)
        {
            arr[i] == 
        }
        
        
    }
    
    
    
}
#include<iostream>
int main()
{
    int arr[] = {-1,3,4,-4,5,8,34,-5,-76,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr ,size);
}