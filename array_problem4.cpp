using namespace std;

//searching elements in sorted array and rotated array
#include<iostream>
int search(int arr[], int l, int r,int key)
{
    int mid;
    mid = (l+r)/2;
    if (key == arr[mid])
    {
        return mid;
    }
    if(arr[l] <= arr[mid])
    {
        if (key >= arr[l] && key <= arr[mid])
        {
            search(arr,l,mid -1,key);
        }  
        else
        {
            search(arr,mid +1,r,key);
        }
    }
    else
    {
        if (key >= arr[mid] && key <= arr[r])
        {
            search(arr,mid +1,r,key);
        }
        else
        {
            search(arr,l,mid -1,key)
        }
        
        
    }
    


}

int main()
{
    int arr[] = {7,8,1,2,4,5,6};
    int key,size,r;
    size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    r = search(arr,0,size -1,key);
    if (i != -1) 
    cout << "Index: " << i << endl; 
    else
    cout << "Key not found"; 
}