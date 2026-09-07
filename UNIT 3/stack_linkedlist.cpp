//Stack implementation using linked list

#include <iostream>
using namespace std;

void push(int x);
void pop();
void display();

class Node{
    public:
        int data;
        Node *next;

        Node(int x){
            data = x;
            next = NULL;
        }
}; Node *top = NULL;

int main()
{
    int n,c=0;
    while(c!=3)
    {
        cout << "\nEnter 1 to push.\nEnter 2 to pop\nEnter 3 to exit\n";
        cin >> c;
        if(c==1)
        {
            cout << "Enter the number to push: ";
            cin >> n;
            push(n);
            display();
        }
        else if(c==2)
        {
            pop();
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

void push(int x)
{
    Node *newnode = new Node(x);
    if(top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}

void pop()
{
    if(top==NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        Node *temp=top;
        top=top->next;
        temp->next=NULL;
        cout << temp->data <<" has been deleted\n";
        delete temp;
    }
}

void display()
{
    if(top==NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        Node *temp=top;
        while(temp!=NULL)
        {
            cout << temp->data<<"->";
            temp=temp->next;
        }
    }
}
