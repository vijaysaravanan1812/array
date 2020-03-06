//find index of mininum average of subarray
using namespace std;

#include<iostream>
int average(int arr[],int n,int k)
{
    int res_index=0;
    int current_sum,min_sum;
    for (int i = 0; i < k; i++)
    {
        current_sum+=arr[i];
    }
    min_sum = current_sum;
    for (int i = k; i < n; i++)
    {
        current_sum += arr[i] - arr[i-k];
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            res_index=(i-k+1);
            cout<<res_index;
        }
        
    }
    return res_index;

    
}
int main()
{
    int arr[] = {3,7,90,20,10,50,40},s,index;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the size of subarray";
    cin>>s;
    index=average(arr,size,s);
    cout<<"subarray is ["<<index<<" , "<<(index + s -1)<<"]";
    
}
