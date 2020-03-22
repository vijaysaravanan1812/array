using namespace std;
//linked list problem 1) inserting elements
#include<iostream>
int s;
struct node
{
    int data;
    node *next;
};

//To Find Length of linked list
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

//To Print the linked list
void printlist(node *temp)
{
    while ( temp != NULL)
    {
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<"\n";
}

//This function is to insert the element at last in linked list
void insert_end(node *temp)
{
    node *nextnode;
    nextnode = new node();
    cout<<"your new element"<<"\t"; 
    cin>>nextnode -> data;
    nextnode ->next = NULL;
    while ( temp ->next != NULL)
    {
        temp = temp ->next;
    }
    temp ->next =  nextnode ;
    printlist(temp);
}

//This function is to insert element at any position
void insert(node *temp ,int position)
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


int main()
{
    int position;
    
    //Creating four nodes
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
 
    
    if (position == 1)
    {
        // inserting element at first position
        node *newnode;  
        newnode = new node();
        cout<<"your new element"<<"\t";
        cin>>newnode -> data;
        newnode ->next = first;
        first  = newnode;
        printlist(first);
    }
    else
    {
        if (position > length(first))
        {
            cout<<"Invalid position";
        }
        if (position == (length(first) + 1))
        {
            insert_end(first);
        }   
        if (position <= length(first))
        {
            insert(first,position);
            printlist(first);
        }
    }
    return 0;
}