using namespace std;
//linked list
#include<iostream>
int s;
struct node
{
    int data;
    node *next;
};

void printlist(node *n)
{
    while ( n != NULL)
    {
        cout<<n ->data<<" ";
        n = n ->next;
    }
    cout<<"\n";
    
}

void insert(node *n)
{
    int count = 0;
    while (count != 10)
    {
        node *nextnode;  
        nextnode = new node();
        cin>>nextnode -> data;
        nextnode ->next = n;
        n=nextnode;
        printlist(nextnode);
        
        count++;
    }


}

int main()
{
    
    node *first = NULL;
    first = new node();
    cin>>first ->data;
    first ->next = NULL;
     
    insert(first);
  
 

}