//Queue implementation using linked list

#include <iostream>
using namespace std;

void enqueue(int x);
void dequeue();
void display();

class Node{
    public:
        int data;
        Node *next;

        Node(int x){
            data = x;
            next = NULL;
        }
}; Node *front = NULL;
Node *rear = NULL;

int main()
{
    int n,c=0;
    while(c!=3)
    {
        cout << "\nEnter 1 to enqueue.\nEnter 2 to dequeue\nEnter 3 to exit\n";
        cin >> c;
        if(c==1)
        {
            cout << "Enter the number to enqueue: ";
            cin >> n;
            enqueue(n);
            display();
        }
        else if(c==2)
        {
            dequeue();
            display();
        }
        else if(c==3)
        {
            cout << "Exiting...";
            exit(0);
        }
        else
        {
            cout << "Invalid input";
        }
    }
}

void enqueue(int x) // Basically insertion at the beginning
{
    Node *newnode = new Node(x);
    if(front==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        newnode->next=front;
        front=newnode;
    }
}

void dequeue() // Basically deletion from the beginning
{
    if(front==NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        Node *temp=front;
        front=front->next;
        temp->next=NULL;
        cout << temp->data <<" has been deleted\n";
        delete temp;
    }
}

void display()
{
    if(front==NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        Node *temp=front;
        while(temp!=NULL)
        {
            cout << temp->data<<"->";
            temp=temp->next;
        }
    }
}
