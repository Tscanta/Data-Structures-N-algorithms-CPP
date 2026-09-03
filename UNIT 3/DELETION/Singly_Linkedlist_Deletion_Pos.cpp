#include <iostream>
using namespace std;

void delete_pos(int pos);
void display();

class Node
{
    public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
}; Node *head = NULL;

int main()
{
    // Creating 5 default Nodes
    Node *node1 = new Node(11);
    Node *node2 = new Node(22);
    Node *node3 = new Node(33);
    Node *node4 = new Node(44);
    Node *node5 = new Node(55);
    
    // Connecting these nodes
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    display();

    while(head!=NULL)
    {
        int pos;
        cout << "\nEnter the position to delete the element at that position\n";
        cin >> pos;
        delete_pos(pos);
    }
}

void delete_pos(int pos)
{
    
}

void display()
{
    Node *temp = head;
    if(head == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        while(temp!=NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        
    }
}