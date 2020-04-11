using namespace std;
//queue implementation
#include<iostream>
int n =10;
int rear = -1,front = -1;
int queue[10];

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1)%n == front)
    {
        cout<<"queue is full"<<"\n";
    }
    else
    {

        rear = (rear+1)%n;
        queue[rear] = x;
      
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout<<"Nothing to delect"<<"\n";
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front +1)%n;
    }
}
void print()
{
    if (front == -1 && rear == -1)
    {
        cout<<"queue is empty"<<"\n";
    }
    else
    {
        int i = front;
        while ( i <= rear )
        {
            cout<<queue[i]<<" ";
            if (i == rear)
            {
                break;
            }
            
            i = (i + 1)%n;
        }
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
            print();
            break;
        default:
            cout<<"Enter 1 to 3"<<"\n";
            break;
        }
    cout<<"Enter 1 to continue or 0 to quit";
    cin>>k1;
    } while (k1 != 0);
    
}