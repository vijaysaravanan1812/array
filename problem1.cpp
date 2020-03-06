<<<<<<< HEAD
//array rotation
using namespace std;

=======
using namespace std;
//Array rotation
>>>>>>> af505663584f54e8058d99b98a79a1cb8fc4d976
#include<iostream>
int main()
{
    int arr[]={2,3,5,8,4,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    int r,k;
    cout<<"Enter No of rotation"<<"\n";
    cin>>k;
    if (k>size)
    {
        r=k%6;
    }
    r=k;
    
    cout<<"The array is:"<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    for (int i = 0; i < r; i++)
    {
 
        int temp;
        temp=arr[size-1];
        int j=(size-1);
        while (j!=0)
        {
            arr[j]=arr[j-1];
            j--;                
        }
        arr[j]=temp;

 
    }
    cout<<"\n";
    cout<<"After rotation:"<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    return 0;
    
<<<<<<< HEAD
}
=======
}
>>>>>>> af505663584f54e8058d99b98a79a1cb8fc4d976
