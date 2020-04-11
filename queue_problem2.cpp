using namespace std;
// queue implementation by linked list
#include<iostream>

struct node
{
    int data;
    node *next;
};
node *front = NULL;    
node *rear  = NULL;



void enqueue(int x)
{
    node *newnode = NULL;
    newnode = new node();
    newnode ->data = x;
    if (rear == NULL)
    {
        front = rear = newnode;
        rear ->next = front;
    }
    else 
    {
        rear ->next = newnode;
        rear = newnode;
        rear ->next = front;
    }
}

void dequeue()
{
    node *temp = NULL;
    temp = front;
    if (front  == NULL && rear == NULL)
    {
        cout<<"queue is empty"<<"\n";
    }
    
    else if (front == rear)
    {
        front = NULL;
        rear = NULL;
        free(temp);
    }

    else
    {
        front = front ->next;
        rear -> next = front;
        free(temp);
    }
}

void print(node *temp)
{
    if (front == NULL)
    {
        cout<<"Nothing to print"<<"\n";
    }
    else
    {
        while (temp->next != front )
        {
            cout<<temp ->data<<" ";
            temp = temp ->next;
        }
        cout<<temp ->data;
        cout<<"\n";
    }
    

}

int main()
{
    int k1;
    do
    {
        int k ;
        cin>>k;
        switch (k)
        {
        case 1:
            int x;
            cin>>x;
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            print(front);
            break;
        default:
            cout<<"Enter 1 to 3"<<"\n";
            break;
        }
    cout<<"Enter 1 to continue or 0 to quit";
    cin>>k1;
    } while (k1 != 0);
    
}