
//insertion sort

using namespace std;

#include<iostream>
int insertion_sort(int size,int arr[])
{
    int temp,j;
    for (int i = 1; i < size; i++)
    {
        j=i-1;
        temp = arr[i];
        while (arr[j] > temp && j >=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
    return 0;
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given Array is "<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    cout<<"Sorted Array is ";
    
    insertion_sort( size,  arr);
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }cout<<"\n";
    
    return 0;
}



