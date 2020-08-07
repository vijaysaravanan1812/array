//1) Array rotation in cyclicaly left

using namespace std;

#include<iostream>

void rotate(int arr[],int size)
{
    int i,temp;
    temp = arr[size -1];
    for ( i = size -1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    /*
    Steps
    1)Given Array 1,2,3,4,5,6,7
    2)temp = 7
    3)in for loop 
        i = 6 , i = i--
        1) i = 6,arr[6]=arr[5] -> 1,2,3,4,5,6,6
        2) i = 5,arr[5]=arr[4] -> 1,2,3,4,5,5,6
        3) i = 4,arr[4]=arr[3] -> 1,2,3,4,4,5,6
        4) i = 3,arr[3]=arr[2] -> 1,2,3,3,4,5,6
        5) i = 2,arr[2]=arr[1] -> 1,2,2,3,4,5,6
        6) i = 1,arr[1]=arr[0] -> 1,1,2,3,4,5,6
    arr[0] = temp ie: arr[0] = 7
    */
}

int main()
{
    int size,r,count = 0;
    int arr[] = {1,2,3,4,5,6,7};
    size = sizeof(arr)/sizeof(arr[0]);

    //To display given array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    
    cout<<"No of times to rotate the array"<<"\t";
    // r is variable to get value to rotate array
    cin>>r;

    cout<<"Rotated array"<<"\n";

    //Rotation of array occur in this section
    while (count != (r%size) )
    {
        rotate(arr,size);
        count++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<"\n";

    
    return 0;
}