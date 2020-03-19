
//insertion sort

using namespace std;

#include<iostream>
int insertion_sort(int n,int arr[])
{
    int temp,j;
    for (int i = 1; i < n; i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=temp;

        
    }
    
}
int main()
{
    int n,arr[]={4,2,1,8,9,10};
    n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort( n,  arr);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<"\t";
    }
    

}

}

