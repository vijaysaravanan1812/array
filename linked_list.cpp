using namespace std;

#include<iostream>

struct node
{
    int data;
    node *next;
};

void printlist(node *n)
{
    while (n != NULL)
    {
        cout<<n ->data<<" ";
        n = n ->next;
    }
    
}

int main()
{
    node *first = NULL;
    node *second = NULL;
    node *third = NULL;


    first = new node();
    third = new node();
    second = new node();
    
    first ->data =  1;
    first ->next = second;
    
   
    second ->data = 21;
    second ->next = third ;

    
    third ->data = 38;
    third ->next = first;
    
    printlist(first);
    return 0;

}