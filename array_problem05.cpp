//5) Given a sorted and rotated array, find if there is a pair with a given sum
using namespace std;

#include<iostream>
int find_pair(int arr[],int size,int sum)
{
    int i = 0;           
    int l = i + 1 % size;  // l=1
    int r = 0;         // r=0
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                return 1;
            }
            
        }
        
    }
    
    return -1;
    

}

int main()
{
    int arr[] = {10,9,1,2,3};
    int size,sum = 5;
    size = sizeof(arr)/sizeof(arr[0]);
    int res = find_pair(arr,size,sum);
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    
    if (res == 1)
    {
         cout<<"array has  two elements with sum "<<sum<<"\n";    
    }
    else
    {
         cout<<"array has no two elements with sum "<<sum<<"\n";
    }
    
    

    return 0;
}