//2) array rotation in cyclicaly right

using namespace std;

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

    //Displaying given Array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    cout<<"No of times to rotate the array"<<"\t";

    //r is a variable to get value of rotations
    cin>>r;


    cout<<"Rotated array"<<"\n";

    //Rotation of array occur in this section
    while (count != r%size )
    {
        rotate(arr,size);
        count++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";

    
    return 0;
}