using namespace std;
//linked list
#include<iostream>
int s;
struct node
{
    int data;
    node *next;
};
void insert(node *n)
{
    node *nextnode;
    nextnode = new node();
    cin>>nextnode -> data;
    nextnode ->next = NULL;
    while ( n ->next != NULL)
    {
        n = n ->next;
    }
    n ->next =  nextnode ;
}
void printlist(node *n)
{
    while ( n != NULL)
    {
        cout<<n ->data<<" ";
        n = n ->next;
    }
    cout<<"\n";
    
}

int main()
{
    int count = 0;
    node *first = NULL;
    first = new node();
    cin>>first ->data;
    first ->next = NULL;

    while (count != 10)
    {
        
        cout<<"Do you wamt quit (Yes-1/No-0)";
        cin>>s;
        if (s== 1)
            break;
        else
        {
           insert(first);
            printlist(first);
            count ++;
        }
    }
    cout<<"Final list :\n";
    printlist(first);

    return 0;
 

}