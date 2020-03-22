using namespace std;

//array rotation in cyclicaly
#include<iostream>
void rotate(int arr[],int size)
{
    int i,temp;
    temp = arr[0];
    for ( i = 0; i <  size -1; i++)
    {
        arr[i] = arr[i+1];
    }arr[size - 1] = temp;


    
}

int main()
{
    int size,r,count = 0;
    int arr[] = {1,2,3,4,5,6,7};
    size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"No of times to rotate the array"<<"\t";
    cin>>r;
    cout<<"\n";

    cout<<"Rotated array"<<"\n";
    while (count != r )
    {
        rotate(arr,size);
        count++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}