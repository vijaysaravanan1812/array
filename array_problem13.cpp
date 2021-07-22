
// program to create dynamic array

#include<iostream>

using namespace std;

template <typename T>
class array
{

public:
    T *Array = NULL;
    array(int size)
    {
        Array = new T [size];
    }
};


int main()
{
    system("clear");
    int count = 0;
    int k = 1;
    while (1)
    {
        system("clear");
        
        array<int>a(k);
        for (int i = 0; i < k; i++)
        {
            a.Array[i] = i;
        }
        for(int i = 0; i < k; i++)
        {
            for (int i = 0; i < k; i++)
            {
                printf("* *\n * ");
                for ( int j = 0; i < i + 1; j++)
                {
                    printf("\t @@@@@@#$ ");
                }
                
            }
            printf("\t\n            $$%%");
             getchar();
        
        }
        getchar();
        printf("\n");
        
        if (k < 50 && count != 1 )
        {
            k++;
        }
        else
        {
            if (k == 1)
                break;
            
            count = 1;
            k--;
        }

        
        
    }
    
    
    


}