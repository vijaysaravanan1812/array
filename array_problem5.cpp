using namespace std;
//Given a sorted and rotated array, find if there is a pair with a given sum
#include<iostream>
int find_pair(int arr[],int size,int sum)
{
    int i =0;
    int l = (i+1) % size;
    int r = i;
    while (l != r)
    {
        if (arr[l] + arr[r] == sum)
        {
            return 1;
        }
        if (arr[l] + arr[r] < sum)
            l=(l+1)%size;
        else
            r=(size+r-1)%size;
    }
    return -1;
    
    
}

int main()
{
    int arr[] = {7,8,1,2,3,4,5};
    int size,sum=9;
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