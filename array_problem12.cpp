/*
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.
 * Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
 *
 * Solution
 * Take minimum size of two array. Possible number of partitions are from 0 to m in m size array.
 * Try every cut in binary search way. When you cut first array at i then you cut second array at (m + n + 1)/2 - i
 * Now try to find the i where a[i-1] <= b[j] and b[j-1] <= a[i]. So this i is partition around which lies the median.
 *
 * Time complexity is O(log(min(x,y))
 * Space complexity is O(1)
*/

#include<iostream>
#include<math.h>

using namespace std;

double get_median(int arr1[],int arr2[])
{
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    if(size1 > size2)
    {
        return get_median(arr2,arr1);
    }
    int x = size1,y = size2;

    int low = 0;int high = x;
    while(low <= high)
    {
        for (int i = low; i <= high; i++)
        {
            printf("%d\t",arr1[i]);
        }
        printf("\n");
        

        int partitionx = low + (high - low)/2;
        int partitiony = (x + y + 1)/2 - partitionx;

        int max_left_x = (partitionx == 0)? -12410: arr1[partitionx - 1];
        int min_right_x = (partitionx == x)? 10120: arr1[partitionx];
        

        int max_left_y = (partitiony == 0)? -1025: arr2[partitiony - 1];
        int min_right_y = (partitiony == y)? 1020: arr2[partitiony];

        if (max_left_x <= min_right_y && max_left_y <= min_right_x )
        {
            if ((x + y)%2 == 0)
            {
               return ((float)max(max_left_x,max_left_x) + min(min_right_x,min_right_y))/2;
            }
            else
            {
                return (float)max(max_left_x , max_left_y);
            }
        }
        else if (max_left_x > min_right_y)
        {
            high = partitionx - 1;
        }
        else
        {
            low = partitionx + 1;
        }
        
        
    }
    

}

int main()
{
    //1,3,3,4,5,6,8,10,28,33,90
    int arr1[] = {3,6,10,28,33};
    int arr2[] = {1,3,4,5,8};

    printf("median %lf",get_median(arr1,arr2));
    return 0;
}