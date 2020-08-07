//3) Find index of mininum average of subarray
using namespace std;

#include<iostream>
int average(int arr[],int n,int s)
{
    int res_index=0;
    int current_sum = 0;
    int min_sum;
    
    /*
    Frist calculate sum of frist subarray elements {0 , ..... , s -1},
    here subarray size is 3 and it's element is {7,3,90}
    And then store it variables current_sum and  min_sum.
    */
    for (int i = 0; i < s; i++)
    {
        current_sum+=arr[i];
    }
    min_sum = current_sum;

    /*
    ex: This array 3,7,90,20,10,50,40 and size of subarray is 3,it's
        min_sum and current_sum is 100.
        
    */
    
    for (int i = s; i < n; i++)
    {
        current_sum += arr[i] - arr[i-s];
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            res_index=(i-s+1);
        }
        
    }
    return res_index;
    /*
        min_sum is 100 and current_sum is 100
        By executing this for loop we get
        for i=3,n=7,i++
        1) i=3 current_sum = current_sum + arr[3] - arr[0] 
            if current_sum < min_sum 
                min_sum = current_sum
                res_index = 3 - 3 + 1
        2) i=4 current_sum = current_sum + arr[4] - arr[1]
            if current_sum < min_sum 
                min_sum = current_sum
                res_index = 4 - 3 + 1
        3) i=5 current_sum = current_sum + arr[5] - arr[2]
            if current_sum < min_sum 
                min_sum = current_sum
                res_index = 5 - 3 + 1
        4) i=6 current_sum = current_sum + arr[6] - arr[3]
            if current_sum < min_sum 
                min_sum = current_sum
                res_index = 6 - 3 + 1
        5) i=7 current_sum = current_sum + arr[7] - arr[4]
            if current_sum < min_sum 
                min_sum = current_sum
                res_index = 7 - 3 + 1

    */
    
}
int main()
{
    int arr[] = {3,7,90,20,10,50,40},s,index;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is "<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }cout<<"\n";
    
    cout<<"Enter the size of subarray"<<"\n";
    cin>>s;
    index=average(arr,size,s);
    cout<<"Minimum average subarray index is ["<<index<<" , "<<(index + s -1)<<"]";
    cout<<"\n";
    
}
