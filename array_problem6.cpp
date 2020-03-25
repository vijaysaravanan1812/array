//  Find max value of i*arr[i] 
using namespace std;

#include<iostream>
int max(int arr[], int size)
{
    int sum_of_array =0,current_value =0,maxvalue = 0;

    //To calculate sum of array at Ro and i*arr[i]
    for (int i = 0; i < size; i++)
    {
        sum_of_array = sum_of_array + arr[i];
        current_value = current_value + i*arr[i];
    }

    //Rj - Rj-1 = arrsum - n*arr[n - j] ---> R1 -Ro ie current_value
    //Now sum array at Ro 
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
    cout<<"Max value is"<<max(arr,size);
    return 0;

}