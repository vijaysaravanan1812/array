//8) Rearrange the array such that elements at even positions are greater than all elements before it 
using namespace std;

#include<iostream>
int sort(int size,int arr[])
{
    int temp,j;
    for (int i = 1; i < size; i++)
    {
        temp=arr[i]; //i = 1,2,3,4,5,6,7 
   
        j=i-1; 
        
  
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    return 0;
}


void rearrange(int arr[],int size)
{
    int temp[size];
    int evenpos = size/2;
    int oddpos = size - evenpos;
    // copying array
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }

    sort(size , temp);


    //filling odd position
    int j = oddpos -1;
    for (int i = 0; i < size; i=i+2)
    {
        arr[i] = temp[j];
        j--;
    }

    //filling even position 
    j = oddpos;
    for (int  i = 1; i < size; i=i+2)
    {
        arr[i] = temp[j];
        j++;
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array"<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    cout<<"After rearragement"<<"\t";
    rearrange(arr ,size);
    cout<<"\n";
    return 0;

}