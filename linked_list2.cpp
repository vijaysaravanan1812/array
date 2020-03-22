using namespace std;
//linked list
#include<iostream>
int s;
struct node
{
    int data;
    node *next;
};
int length(node *temp)
{
    int i=1;
    while ( temp != NULL)
    {
        temp = temp ->next;
        i++;
    }
    return i;
}
void printlist(node *temp)
{
    while ( temp != NULL)
    {
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<"\n";
    
}
void insert_1st(node *temp)
{
    node *nextnode;  
    nextnode = new node();
    cin>>nextnode -> data;
    nextnode ->next = temp;
    temp = nextnode;
    printlist(temp);
}

void insert(node *temp ,int position)
{
    if (position > length(temp))
    {
        cout<<"Invalid position ";
    }
    if (position == 1)
    {
        insert_1st(temp);
    }
    
    else
    {
        int count=1;
        node *newnode;  
        newnode = new node();
        cout<<"your new element"<<"\t";
        cin>>newnode -> data;

        while (count != position - 1)
        {
            temp = temp ->next;
            count++;
        } 
        newnode->next = temp ->next;
        temp ->next = newnode;

    }
}
int main()
{
    int position;
    
    node *first = NULL;
    node *second = NULL;
    node *third = NULL;
    node *fourth = NULL;

    first = new node();
    second = new node();
    third = new node();
    fourth = new node();

    cin>>first ->data;
    first ->next = second;

    cin>>second ->data;
    second ->next = third;

    cin>>third ->data;
    third ->next = fourth;


    cin>>fourth ->data;
    fourth ->next = NULL;

    printlist(first);
    cout<<"Enter the position ";
    cin>>position;

    insert(first, position);
     printlist(first);
}