//reverse the array
using namespace std;

#include<iostream>
void reverse(int arr[] ,int l ,int r)
{
    while (l != r)
    {
        int temp;
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    
    
}
int main()
{
    int arr[] = {1,2,3,4,5},size;
    size = sizeof(arr)/sizeof(arr[0]);
    int r =size -1;
    int l = 0;
    cout<<"given array"<<"\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    reverse( arr , l , r);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    

}