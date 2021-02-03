//3) searching elements in sorted array and rotated array by binary search
using namespace std;

#include<iostream>
int search(int arr[], int l, int r,int key)
{
    int mid;
    mid = (l+r)/2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (l>r)
    {
        return -1;
    }

     if(arr[l] <= arr[mid])
    {
        if (key >= arr[l] && key <= arr[mid])  //array = {arr[l], ........key....., ., arr[mid], .................., arr[r] }
            search(arr,l,mid -1,key); 
        else 
            search(arr,mid +1,r,key);
    }
    else 
    {
        if (key >= arr[mid] && key <= arr[r])
            search(arr,mid +1,r,key);
        else
            search(arr,l,mid -1,key);
    }
}
    

int main()
{
    int arr[] = {55,100,1,2,4,5,6,7,10,20};
    int key,size;
    size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the key"<<"\n";
    cin>>key;

    if (search(arr,0,size -1,key) != -1) 
    {
        cout << "Index: " << search(arr,0,size -1,key)<<"\n";
    }
   
    else
    {
         cout << "Key not found"<<"\n";
    }
    return 0;
}
