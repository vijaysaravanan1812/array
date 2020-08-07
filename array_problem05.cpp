//5) Given a sorted and rotated array, find if there is a pair with a given sum
using namespace std;

#include<iostream>
int find_pair(int arr[],int size,int sum)
{
    int i =0;           
    int l = i+1%size;   l=1
    int r = 0;          r=0
    while (l != r)
    {
        if (arr[l] + arr[r] == sum)
        {
            return 1;
        }
        if (arr[l] + arr[r] < sum)
            l=l+1%size; //here l = 2,3,4,5,6,
        else
            r=size-1+r%size;  //here r = 6,5,4,3,2,1,0
    }
    return -1;
    

}

int main()
{
    int arr[] = {10,9,1,2,3,4,5,7,8};
    int size,sum=19;
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