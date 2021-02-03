// 6)  Find max value of i*arr[i] 

/*
    let array = {a,b,c,d}
    at R0 , i*arr[i] = b+2c+3d
    at R1 , i*arr[i] = a+2b+3c
    R1 - R0 = a+b+c-3d
    =>R1-R0 = a+b+c+d-d-3d
    =>R1-R0 = arrsum - 4d => arrsum - nd 
    =>Rj = Rj-1 + arrsum - n*arr[n-j] This is a relation applied in this problem
*/
using namespace std;

#include<iostream>
int max(int arr[], int size)
{
    int sum_of_array = 0,current_value = 0,maxvalue = 0;

    //To calculate sum of array at Ro and i*arr[i]
    for (int i = 0; i < size; i++)
    {
        sum_of_array = sum_of_array + arr[i];
        current_value = current_value + i*arr[i];
    }

 
    for (int j = 1; j < size; j++)
    {
        current_value = current_value + sum_of_array - size*(size -j);
        if (current_value > maxvalue )
        {
            maxvalue = current_value;
        }
        
    }
    
    return maxvalue;
    
}
int main()
{
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given arrar is"<<"\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"maximum value of i*arr[i] is:"<<"\t";
    cout<<max(arr,size);
    cout<<"\n";
    return 0;

}